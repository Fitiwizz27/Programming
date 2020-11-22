#include <iostream>
#include <cmath>
#include "Talor.h"
#include "fact.h"
#include "comb.h"

const double Pi = 3.14159265359;
using namespace std;

int main()
{
    //Вывод факториала до 10
    cout << "n \t" << "n! \n";
    for (int i = 1; i < 11; i++)
    {
        cout << i << "\t" << fact(i) << endl;
    }
    
    //Вывод синуса угла с количеством разложений 5
    cout << endl << "x \t" << "sin(x) \n";
    for (double x = 0; x <= Pi / 4; x += Pi / 180)
    {
        cout.precision(4);
        cout << x << "\t" << Talor(x, 5) << endl;
    }

    //Вывод сечетаний
    cout << endl << "k \t" << "c(k, 10) \n";
    for (int i = 1; i < 11; i++)
    {
        cout << i << "\t" << comb(i, 10) << endl;
    }

}