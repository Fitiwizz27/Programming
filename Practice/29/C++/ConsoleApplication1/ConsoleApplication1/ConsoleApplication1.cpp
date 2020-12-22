#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Student
{
	string name;
	int group;
	map <string, int> exam = { {"mathematics", 1}, {"physics", 1}, {"history", 1}, {"programming", 1} };
};

Student StudentInfo()
{
	Student temp;

	temp.group = rand() % 10 + 1;
	temp.exam["mathematics"] = rand() % 6 + 2;
	temp.exam["physics"] = rand() % 6 + 2;
	temp.exam["history"] = rand() % 6 + 2;
	temp.exam["programming"] = rand() % 6 + 2;

	return temp;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	vector<Student> school = { {"Ahramovich L"}, {"Parmenov V"}, {"Kornienko A"}, {"Abib A"},\
	{"Bers Z"}, {"Pochan P"}, {"Zmetrovich C"}, {"Dobrov N"}, {"Popov T"}, {"Quqa Q"} };

	for (int i = 0; i < 9; i++)
		school[i] = StudentInfo();
	
	system("pause");
}