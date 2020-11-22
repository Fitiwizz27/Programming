#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;
	string s1;

	b = 0;

	cin >> a;

	for (int i = 0; i < a; i++)	{
		cin >> s1;

		s1.resize(9);

		if ((s1[0] == 'a') && (s1[4] == '5') && (s1[5] == '5') && (s1[6] == '6') && (s1[7] == '6') && (s1[8] == '1')) {
			cout << s1 << endl;
			b++;
		}
	}

	if (b == 0) {
		cout << -1 << endl;
	}

	system("pause");
	return(0);
}