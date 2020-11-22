#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;
	cin >> a >> b;
	cout << a + b << endl << a - b << endl << a * b << endl << a / b << endl;

	double a1, b1;
	cin >> a1 >> b1;
	cout << a1 + b1 << endl << a1 - b1 << endl << a1 * b1 << endl << a1 / b1 << endl;

	int a2;
	double b2;
	cin >> a2 >> b2;
	cout << a2 + b2 << endl << a2 - b2 << endl << a2 * b2 << endl << a2 / b2 << endl;

	double a3;
	int b3;
	cin >> a3 >> b3;
	cout << a3 + b3 << endl << a3 - b3 << endl << a3 * b3 << endl << a3 / b3 << endl;

	system("pause");
	return(0);
}