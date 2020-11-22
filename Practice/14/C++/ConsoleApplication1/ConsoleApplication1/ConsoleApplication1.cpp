#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a;

    cin >> a;

    if (a > pow(10, 16)) {
        return(0);
    }

    if (a < 1) {
        cout << 0;
        return(0);
    }

    a = log2(a) + 1;

    cout << a << endl;

    system("pause");
    return(0);
}