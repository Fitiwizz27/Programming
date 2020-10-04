#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double x, x0, v0, t, g = 9.8;
	cin >> x0 >> v0 >> t;
	x = x0 + v0 * t - (g * t * t / 2);

	cout << "Расстояние, которе объект преодолел за " << t << " с, " << abs(x) << endl;

	system("pause");
	return(0);
}