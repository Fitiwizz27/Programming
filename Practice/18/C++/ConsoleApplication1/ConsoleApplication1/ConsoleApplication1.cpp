#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	string slovo;
	double chanse = 1;
	int len = 0;
	char bykvy[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'x'};
	vector<string> s1 = {"hallo", "klempner", "das", "ist", "fantastisch", "fluggegecheimen"};
	double letters[26] = {};

	for (int i = 0; i < s1.size(); i++) {
		for (int j = 0; j < s1[i].size(); j++) {
			len++;
			for (int k = 0; k < 26; k++) {
				if (s1[i][j] == bykvy[k]) letters[k]++;
			}
		}
	}

	for (int i = 0; i < 26; i++) letters[i] = letters[i] / len;

	cin >> slovo;

	for (int i = 0; i < slovo.size(); i++) {
		for (int j = 0; j < 26; j++) {
			if (slovo[i] == bykvy[j]) chanse *= letters[j];
		}
	}

	cout.precision(16);
	cout << chanse << endl;

	system("pause");
	return(0);
}