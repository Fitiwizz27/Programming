#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int    s1[2], s2[2], s, var1, var2;
    cin >> s >> s1[0] >> s1[1] >> s2[0] >> s2[1];

    if ((s1[0] > s1[1]) || (s2[0] > s2[1])) {
        cout << "Неправильная последовательность ввода чисел" << endl;
        return(0);
    }

    if (((s1[0] + s2[0]) == s) || ((s1[0] + s2[1]) == s)) {
        cout << s1[0] << " " << (s - s1[0]);
        return(0);
    }

    if (((s1[1] + s2[0]) == s) || ((s1[1] + s2[1]) == s)) {
        cout << s1[1] << " " << (s - s1[1]);
        return(0);
    }

    else {
        cout << "-1";
        return(0);
    }

    system("pause");
    return(0);
}