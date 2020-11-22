#include <iostream>
#include <conio.h> 
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, c;
	cin >> a >> b;
	c = b;
	b = a;
	a = c;
	cout << "Замена переменных местами с помощью дополнительной переменной " << endl << a << endl << b << endl;
	
	//swap(a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Замена переменных местами без помощи дополнительной переменной " << endl << a << endl << b << endl;

	system("pause");
	return(0);
}