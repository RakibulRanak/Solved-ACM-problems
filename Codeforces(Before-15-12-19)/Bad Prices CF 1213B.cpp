#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t;
	cin >> t;
	while (t--)
	{

		cin >> n;
		int ara[n];

		for (int i = 0; i < n; i++)
			cin >> ara[i];
		int ans = 0, m = ara[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			if (ara[i] > m)
				ans++;
			else
				m = ara[i];
		}
		cout << ans << endl;
	}
	return 0;
}