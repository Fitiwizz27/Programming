#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

const string line = "+---------------+-------+------+------+------+------+";

struct Student
{
	string name;
	int group;
	map <string, int> exam = { {"mathematics", 0}, {"physics", 0}, {"history", 0}, {"programming", 0} };
};

Student setStudentInfo()
{
	Student temp;

	temp.group = rand() % 9 + 1;
	temp.exam["mathematics"] = rand() % 4 + 2;
	temp.exam["physics"] = rand() % 4 + 2;
	temp.exam["history"] = rand() % 4 + 2;
	temp.exam["programming"] = rand() % 4 + 2;

	return temp;
}

ostream& operator<<(ostream& out, Student f)
{
	out << "|" << f.name << " \t|   " << f.group << "   |   " << f.exam["mathematics"] << "  |  " << f.exam["physics"] \
		<< "   |   " << f.exam["history"] << "  |  " << f.exam["programming"] << "   |" << endl;
	cout << line;
	return out;
}

bool operator>(Student first, Student second)
{
	return first.name > second.name;
}

bool checkBadMark(Student temp)
{
	if ((temp.exam["mathematics"] == 2) || (temp.exam["physics"] == 2) || \
		(temp.exam["history"] == 2) || (temp.exam["programming"] == 2))
		return true;
	else
		return false;
}

template<class T>
void print(vector<T> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}
	cout << endl;
}

template<class T>
int random(T b)
{
	int a = rand() % b;
	return a;
}

template<class T>
bool check(vector<T> a)
{
	for (int i = 0; i < a.size() - 1; i++)
	{
		if (a[i] > a[i + 1]) return false;
	}

	return true;
}

template<class T>
vector<T> BozoSort(vector<T> a)
{
	while (check(a) != true)
		swap(a[random(a.size())], a[random(a.size())]);

	return a;
}

void Head()
{
	cout << line << endl\
		<< "| Name          | Group | Math | Phys | Hist | Prog |" << endl\
		<< line << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	system("mode con cols=54 lines=50");

	string names[10] = { "Ahramovich L", "Parmenov V", "Kornienko A", "Abib A",\
	"Bers Z", "Pochan P", "Zmetrovich C", "Dobrov N", "Popov T", "Quqa Q" };

	vector<Student> school(10);

	vector<Student> school_2;
	int badMRK = 0;

	for (int i = 0; i < 10; i++)
	{
		school[i] = setStudentInfo();
		school[i].name = names[i];

		if (checkBadMark(school[i]) == true)
		{
			school_2.push_back(school[i]);
			badMRK++;
		}
	}

	if (badMRK == 0)
	{
		cout << "Not found" << endl;
		system("pause");
		return 0;
	}

	Head();
	print(BozoSort(school_2));

	cout << "Expulsion" << endl << endl;
	Head();
	cout << school_2[rand() % school_2.size()] << endl;

	system("pause");
}