#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	while (n--)
	{
		long long num;
		cin >> num;
		if (num < 15)
			cout << "NO" << endl;
		else {
			num = num % 14;

			if (num <= 6 && num != 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}

}