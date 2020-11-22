#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a = 3, b = 3.14;
	double c = 3, d = 3.14;

	cout << "int " << endl << a << endl << b << endl << "double " << endl << c << endl << d << endl;

	system("pause");
}