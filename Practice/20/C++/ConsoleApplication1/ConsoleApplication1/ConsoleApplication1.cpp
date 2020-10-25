#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int groshi, n, k, b = 0;

	cin >> groshi >> n;

	vector<string> napitki(n);
	vector<int> price(n);
	vector<int> v(n);
	vector<int> rez(n);
	vector<int> litr(n);
	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> napitki[i] >> price[i] >> v[i];
		rez[i] = groshi / price[i];
		litr[i] = rez[i] * v[i];
		if (litr[i] == 0) b++;
	}
	
	if (b == n) {
	cout << -1 << endl;
	return(0);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (litr[i] > litr[j]) k = i;
		}
	}

	cout << napitki[k] << " " << rez[k] << " " << endl << litr[k] << endl << groshi - (price[k] * rez[k]) << endl;

	system("pause");
	return(0);
}