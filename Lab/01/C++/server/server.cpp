#include <iostream>
#include <string>
#include "include/nlohmann/json.hpp"
#include "include/cpp_httplib/httplib.h"
#include <fstream>

using namespace std;
using namespace httplib;
using json = nlohmann::json;

string Shablon;
string cache;

void gen_response(const Request& req, Response& response)
{
	//
	Client worldtimeapi("http://worldtimeapi.org");
	auto res_worldtimeapi = worldtimeapi.Get("/api/timezone/Europe/Simferopol");

	if (!res_worldtimeapi)
	{
		response.set_content("Нет ответа от сервера времени ", "text/plain");
		return;
	}
	else if (res_worldtimeapi->status != 200)
	{
		response.set_content("Ответ сервера времени " + to_string(res_worldtimeapi->status), "text/plain");
		return;
	}

	//
	Client openweathermap("http://api.openweathermap.org");
	auto res_openweathermap = openweathermap.Get("/data/2.5/onecall?lat=44.571270&lon=34.614470&exclude=current,minutely,daily,alerts&appid=c4acec87ef8b2efa7d453114d03c8679&units=metric&lang=ru");

	if (!res_openweathermap)
	{
		response.set_content("Нет ответа от сервера погода ", "text/plain");
		return;
	}
	else if (res_openweathermap->status != 200)
	{
		response.set_content("Ответ сервера погоды " + to_string(res_worldtimeapi->status), "text/plain");
		return;
	}

	//
	if (cache.empty())
		cache = res_openweathermap->body;

	string nowtime;
	nowtime = res_worldtimeapi->body;

	json jcache, jtime;

	jcache = json::parse(cache);
	jtime = json::parse(nowtime);

	bool check = false;
	json remember_way;

	for (int i = 0; i < jcache["hourly"].size(); i++)
	{
		if (jcache["hourly"][i]["dt"] > jtime["unixtime"])
		//if (jcache["hourly"][i]["dt"] > time(0))
		{
			check = true;
			remember_way = jcache["hourly"][i];
			break;
		}
	}

	if (!check)
	{
		res_openweathermap = openweathermap.Get("/data/2.5/onecall?lat=44.571270&lon=34.614470&exclude=current,minutely,daily,alerts&appid=c4acec87ef8b2efa7d453114d03c8679&units=metric&lang=ru");

		if (!res_openweathermap)
		{
			response.set_content("Нет ответа от сервера погода ", "text/plain");
			return;
		}
		else if (res_openweathermap->status != 200)
		{
			response.set_content("Ответ сервера погоды " + to_string(res_worldtimeapi->status), "text/plain");
			return;
		}

		cache = res_openweathermap->body;
		response.set_content("Обновите страницу", "text/plain");
		return;
	}

	string copyShablon;
	copyShablon = Shablon;
	string one = "{hourly[i].weather[0].description}";
	copyShablon.replace(copyShablon.find(one), one.length(), remember_way["weather"][0]["description"]);

	string two = "{hourly[i].weather[0].icon}";
	copyShablon.replace(copyShablon.find(two), two.length(), remember_way["weather"][0]["icon"]);

	string three = "{hourly[i].temp}";
	copyShablon.replace(copyShablon.find(three), three.length(), to_string(int(remember_way["temp"].get<double>())));
	copyShablon.replace(copyShablon.find(three), three.length(), to_string(int(remember_way["temp"].get<double>())));

	response.set_content(copyShablon, "text/html");
}



void gen_response_raw(const Request& req, Response& response)
{
	//
	Client worldtimeapi("http://worldtimeapi.org");
	auto res_worldtimeapi = worldtimeapi.Get("/api/timezone/Europe/Simferopol");

	if (!res_worldtimeapi)
	{
		response.set_content("Нет ответа от сервера времени ", "text/plain");
		return;
	}
	else if (res_worldtimeapi->status != 200)
	{
		response.set_content("Ответ сервера времени " + to_string(res_worldtimeapi->status), "text/plain");
		return;
	}

	//
	Client openweathermap("http://api.openweathermap.org");
	auto res_openweathermap = openweathermap.Get("/data/2.5/onecall?lat=44.571270&lon=34.614470&exclude=current,minutely,daily,alerts&appid=c4acec87ef8b2efa7d453114d03c8679&units=metric&lang=ru");

	if (!res_openweathermap)
	{
		response.set_content("Нет ответа от сервера погода ", "text/plain");
		return;
	}
	else if (res_openweathermap->status != 200)
	{
		response.set_content("Ответ сервера погоды " + to_string(res_worldtimeapi->status), "text/plain");
		return;
	}

	//
	if (cache.empty())
		cache = res_openweathermap->body;

	string nowtime;
	nowtime = res_worldtimeapi->body;

	json jcache, jtime;

	jcache = json::parse(cache);
	jtime = json::parse(nowtime);

	bool check = false;
	json remember_way;

	for (int i = 0; i < jcache["hourly"].size(); i++)
	{
		if (jcache["hourly"][i]["dt"] > jtime["unixtime"])
			//if (jcache["hourly"][i]["dt"] > time(0))
		{
			check = true;
			remember_way = jcache["hourly"][i];
			break;
		}
	}

	if (!check)
	{
		res_openweathermap = openweathermap.Get("/data/2.5/onecall?lat=44.571270&lon=34.614470&exclude=current,minutely,daily,alerts&appid=c4acec87ef8b2efa7d453114d03c8679&units=metric&lang=ru");

		if (!res_openweathermap)
		{
			response.set_content("Нет ответа от сервера погода ", "text/plain");
			return;
		}
		else if (res_openweathermap->status != 200)
		{
			response.set_content("Ответ сервера погоды " + to_string(res_worldtimeapi->status), "text/plain");
			return;
		}

		cache = res_openweathermap->body;
		response.set_content("Обновите страницу", "text/plain");
		return;
	}

	json raw;

	raw["description"] = remember_way["weather"][0]["description"];
	raw["temp"] = int(remember_way["temp"]);

	string Raw = raw.dump();
	response.set_content(Raw, "text/json");
}


int main() {

	ifstream file("template.html");
	getline(file, Shablon, '\0');
	file.close();

	Server svr;
	svr.Get("/raw", gen_response_raw);
	svr.Get("/", gen_response);
	svr.listen("localhost", 3000);
}