#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, i;

	cin >> a;

	i = 2;

	if ((a < 2) || (a > pow(10, 9))) {
		return(0);
	}

	while (i != a) {

		if (a % i != 0) {
			i = i + 1;
		}
		else {
			i = 1;
			break;
		}
	}

	if ((i == 1) || (a == 2)) {
		cout << "Составное" << endl;
	}
	else {
		cout << "Простое" << endl;
	}

	system("pause");
	return(0);
}