#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    char c;
    double a, b;

    cin >> a >> c >> b;

    if (c != 43 && c != 45 && c != 42 && c != 47) {
        cout << "Калькулятор не может выполнить заданное действие";
        return(0);
    }

    if (c == 43) {
        a = a + b;
        cout << a;
        return(0);
    }

    if (c == 45) {
        a = a - b;
        cout << a;
        return(0);
    }

    if (c == 42) {
        a = a * b;
        cout << a;
        return(0);
    }

    if (c == 47) {

        if (b == 0) {
            cout << "Деление на 0 невозможно";
            return(0);
        }

        a = a / b;
        cout << a;
        return(0);
    }

    system("pause");
    return(0);
}