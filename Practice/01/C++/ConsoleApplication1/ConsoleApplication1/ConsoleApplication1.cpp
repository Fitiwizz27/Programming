#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int plus = 0;

	vector<int> arr = { 1, 4, 6, 8 };

	for (int i = 0; i < arr.size() - 1; i++)
	{
		if (arr[i] < arr[i + 1]) plus++;
	}

	cout << plus;



	system("pause");
}