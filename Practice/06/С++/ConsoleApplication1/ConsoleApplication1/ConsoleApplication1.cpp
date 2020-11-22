#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, c, x, x1, x2;

	cin >> a >> b >> c;

	if (a == 0 && b == 0) {
		cout << "Ошибка ввода значений" << endl;
		return(0);
	}

	if (a == 0) {
		x = (-1 * c) / b;
		cout << "Уравнение имеет один корень x = " << x << endl;
		return(0);
	}

	x = b * b - 4 * a * c;

	if (x < 0) {
		cout << "Решений нет (УЧИ КОМПЛЕКСНЫЕ ЧИСЛА!) :)" << endl;
		return(0);
	}
	else
	{
		if (x == 0) {
			x = (-1 * b) / (2 * a);
			cout << "Уравнение имеет один корень x = " << x << endl;
			return(0);
		}
		else {
			x1 = (-1 * b + sqrt(x)) / (2 * a);
			x2 = (-1 * b - sqrt(x)) / (2 * a);
			cout << "Первый корень уравнения x1 = " << x1 << endl << "Второй корень уравнения x2 = " << x2 << endl;
			return(0);
		}
	}

	system("pause");
	return(0);
}