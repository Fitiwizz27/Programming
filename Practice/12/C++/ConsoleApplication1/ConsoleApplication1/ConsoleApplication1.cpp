#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b, i;

    cin >> a;

    if ((a > pow(10, 9)) || (a < 0)) {
        cout << "Ошибка";
        return(0);
    }

    b = a;
    i = 1;
    a = 1;

    while (i < b + 1) {
        a = a * i;
        i = i + 1;
    }

    cout << a << endl;

    system("pause");
    return(0);
}