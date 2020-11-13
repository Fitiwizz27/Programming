#include <iostream>
#include <cmath>
#include <M:\Учеба\Программирование\Practice\23\С++\ConsoleApplication1\Functions\fact.h>

using namespace std;

int Talor(int x, int k)
{
    if (x > 0)
    {
        double anws = 0;

        for (int i = 0; i < k; i++)
        {
            anws = pow(-1, i) * (pow(x, 2 * i + 1) / (fact(2 * i + 1))) + anws;
        }
        return anws;
    }
    else return 0;      
}

int main()
{
    cout << "n \t" << "n! \n";
    for (int i = 1; i < 11; i++)
    {
        cout << i << "\t" << fact(i) << endl;
    }

    cout << endl << "x \t" << "sin(x) \n";
    for (int i = 0; i < 47; i++)
    {
        double x = 0;
        cout << x << "\t" << Talor(x, i) << endl;
    }
}