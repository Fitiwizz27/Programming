#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

template<class T>
void print(vector<T> a)
{
	vector<int> b(5);

	cout << endl;
	
	if (a.size() <= 5)
	{
		for (int i = 0; i < a.size(); i++)
		{
			cout << a[i] << " ";
		}
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			b[i] = a[a.size() - (i + 1)];
		}

		for (int i = 4; i >= 0; i--)
		{
			cout << b[i] << " ";
		}
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
		if (a[i] < a[i + 1]) return false;
	}

	return true;
}

template<class T>
vector<T> BozoSort(vector<T> a)
{
	while (check(a) != true)
	{
		swap(a[random(a.size())], a[random(a.size())]);
	}

	return a;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cin >> n;

	vector<int> vec;
	vector<int> vec2;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		vec.push_back(a);

		print(BozoSort(vec));
	}

	/*for (int i = 0; i < n; i++)
	{
		vec2.push_back(vec[i]);
		print(BozoSort(vec2));
	}*/

	system("pause");
}