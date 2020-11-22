#include <iostream>
#include <utility>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int s1[37];
	int s2[37];
	int s3[37] = {};	
	int zapominalka[12];
	int a;
	int red_num[18] = {1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36};
	int black_num[18] = {2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33, 35};
	int red, black;
	int max = 0;

	black = 0;
	red = 0;

	for (int i = 0; i < 12; i++) {
		zapominalka[i] = -1;
	}

	for (int i = 0; i <= 36; i++) {
		s1[i] = i;
		s2[i] = i;
	}

	while (true) {

		for (int k = 0; k < 12; k++) {
			cin >> a;

			/*
			Выводим номер игры
			cout << k % 12 << endl << endl;
			*/

			if ((a < 0) || (a >= 37)) return(0);
			for (int i = 0; i <= 17; i++) if (a == black_num[i]) black++;
			for (int i = 0; i <= 17; i++) if (a == red_num[i]) red++;

			s3[a]++;
			for (int i = 0; i <= 36; i++) if (s3[i] > max) max = s3[i];
			for (int i = 0; i <= 36; i++) if (s3[i] == max) cout << s1[i] << " ";

			cout << endl;

			zapominalka[k % 12] = a;
			
			/*
			Выводим значения запоминалки
			cout << endl << endl;
			for (int i = 0; i < 12; i++) cout << zapominalka[i] << " ";
			cout << endl << endl;
			*/

			for (int i = 0; i < 12; i++) {
				for (int j = 0; j < 36; j++) {
					if (s1[j] == zapominalka[i]) s1[j] = -1;
				}
			}

			for (int i = 0; i <= 36; i++) if (s1[i] != -1) cout << s1[i] << " ";
			else s1[i] = s2[i];

			cout << endl << red << " " << black << endl << endl;
		}
	}

	system("pause");
	return(0);
}