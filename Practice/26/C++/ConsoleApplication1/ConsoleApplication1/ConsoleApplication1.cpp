#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

template<class T>
void print(vector<T> a)
{
	cout << endl;

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
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
bool check(vector<T> a, bool b)
{
	if (b == true)
	{
		for (int i = 0; i < a.size() - 1; i++)
		{
			if (a[i] > a[i + 1]) return false;
		}
	}
	else
	{
		for (int i = 0; i < a.size() - 1; i++)
		{
			if (a[i] < a[i + 1]) return false;
		}
	}

	return true;
}

template<class T>
vector<T> BozoSort(vector<T> a, bool plus = true)
{
	while (check(a, plus) != true)
	{
		swap(a[random(a.size())], a[random(a.size())]);
	}

	return a;
}

template<class T>
vector<T> BozoSort(vector<vector<T>> a, bool plus = true)
{
	vector<int> vec;

	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a.size(); j++)
		{
			vec.push_back(a[i][j]);
		}
	}

	while (check(vec, plus) != true)
	{
		swap(vec[random(vec.size())], vec[random(vec.size())]);
	}

	return vec;
}

template<class T>
vector<T> BozoSort(T a, T b, T c, bool plus = true)
{
	vector<int> vec = { a, b, c };

	while (check(vec, plus) != true)
	{
		swap(vec[random(vec.size())], vec[random(vec.size())]);
	}

	return vec;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	double n;
	cin >> n;

	if ((n < 4) || (n > 100) || (pow(sqrt(n), 2) != n))
	{
		cout << "Ошибка ввода данных:" << endl\
			<< "-первое число должно быть в диапазоне от 4 до 100" << endl\
			<< "-корень от первого числа должен быть целым числом" << endl;

		system("pause");
		return 0;
	}

	int a, b, c;
	vector<int> vec;
	vector<int> line;
	vector<vector<int>> vec2;

	for (int i = 1; i < n + 1; i++)
	{
		int num;
		cin >> num;

		vec.push_back(num);
		line.push_back(num);

		if (i % int(sqrt(n)) == 0)
		{
			vec2.push_back(line);
			line.clear();
		}

	}

	a = vec[0];
	b = vec[1];
	c = vec[2];

	print(BozoSort(vec));
	print(BozoSort(vec, false));
	print(BozoSort(vec2));
	print(BozoSort(vec2, false));
	print(BozoSort(a, b, c));
	print(BozoSort(a, b, c, false));

	system("pause");
}