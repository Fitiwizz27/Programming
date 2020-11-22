#include <iostream>
#include <math.h> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int h1, h2, m1, m2, s1, s2;
    char c;

    cin >> h1 >> c >> m1;
    cin >> h2 >> c >> m2;

    if (((h1 < 0) || (h1 > 23)) || ((h2 < 0) || (h2 > 23)) || ((m1 < 0) || (m1 > 59)) || ((m2 < 0) || (m2 > 59))) {
        cout << "Неправильный ввод данных";
        return(0);
    }

    s1 = h1 * 60 + m1;
    s2 = h2 * 60 +m2;

    if (abs(s1 - s2) < 16) {
        cout << "Встреча состоится" << endl;
        return(0);
    }

    else {
        cout << "Встреча не состоится" << endl;
        return(0);
    }

    system("pause");
    return(0);
}