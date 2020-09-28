#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, c, S, a1, b1, c1;

	cout << "Выберете способ подсчета:" << endl << "1. Через длины сторон" << endl << "2. Через координаты вершин" << endl;
	cin >> S;

	if (S < 1 || S > 2) {
		cout << "Неправильный ввод данных: выберете способ из списка" << endl;
		return(0);
	}

	if (S == 1) {
		cout << "Введите длинны сторон треугольников" << endl;
		cin >> a >> b >> c;

		if ((a + b <= c) || (a + c <= b) || (c + b <= a)) {
			cout << "Неправильный ввод данных: треугольник не существует" << endl;
				return(0);
		}

		if (a <= 0 || b <= 0 || c <= 0) {
			cout << "Неправильный ввод данных: не бывает отрицательной длины" << endl;
			return(0);
		}

		S = (a + b + c) / 2;
		S = sqrt(S * (S - a) * (S - b) * (S - c));
		cout << "S = " << S;
		return(0);
	}
	else {
		cout << "Введите координаты сторон треугольников" << endl;
		cin >> a >> a1 >> b >> b1 >> c >> c1;

		if ((a == b && a1 == b1) || (b == c && b1 == c1) || (c == a) && (c1 == a1)) {
			cout << "Неправильный ввод данных: координаты некоторых точек совпадают" << endl;
			return(0);
		}

		S = abs((b - a1) * (c1 -a1) - (c - a) * (b1 - a1)) / 2;
		cout << "S = " << S;
		return(0);
	}

	system("pause");
	return(0);
}