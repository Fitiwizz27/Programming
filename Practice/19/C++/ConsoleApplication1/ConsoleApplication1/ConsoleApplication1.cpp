#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	int fact = 1;
	string s1;

	cin >> n;
	cin >> s1;

	sort(s1.begin(), s1.end());

	for (int i = 1; i <= n; i++) fact = fact * i;

	do {
		cout << s1 << '\n';
	} while (next_permutation(s1.begin(), s1.end()));

	vector<int> var(fact);
	for (int i = 0; i < var.size(); i++) {

	}

	system("pause");
	return(0);
}