#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int z, len;
	string c;
	vector<string> s1 = {"hallo", "klempner", "das", "ist", "fantastisch", "fluggegecheimen"};
	char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	
	for (int i = 0; i < s1.size(); i++) {
		for (int j = 0; j < s1[i].size(); j++) {
			cout << s1[i][j];
		}
		cout << " ";
	}

	system("pause");
	return(0);
}