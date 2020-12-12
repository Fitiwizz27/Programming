#include <iostream>
#include <map>
#include <string>

using namespace std;

void print(unsigned int n)
{
    map<unsigned int, unsigned int> delitel;
    const int min = 2;

    for (unsigned int i = 2; n == 0 or i <= n; i++)
    {
        if (n % i == 0) {
            n /= i;

            delitel[i]++;

            i = min;
        }
    }

    bool not_1 = false;

    for (const auto& elem : delitel)
    {
        cout << (not_1 ? "*" : (not_1 = true, "")) << elem.first;

        if (elem.second > 1)
        {
            cout << "^" << elem.second;
        }
    }

    cout << endl;
}

int main()
{
    unsigned int a;
    cin >> a;

    print(a);
    system("pause");
}