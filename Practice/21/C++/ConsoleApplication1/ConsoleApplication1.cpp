#include <iostream>

using namespace std;

double BMI(double weight, double height)
{
	double BMI;
	BMI = weight / pow(height / 100, 2);
	return BMI;
}

void printBMI(double BMI)
{
	if (BMI < 18.5) cout << "Underweight\n";
	if ((BMI >= 18.5) && (BMI < 25.0)) cout << "Normal\n";
	if ((BMI >= 25.0) && (BMI < 30)) cout << "Overweight \n";
	if (BMI > 30) cout << "Obesity\n";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	system("mode con cols=50 lines=30");

	double weight, height;

	cin >> weight >> height;

	printBMI(BMI(weight, height));

	system("pause");
};