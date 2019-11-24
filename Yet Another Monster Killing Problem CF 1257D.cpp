#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int enemy[n];
		for (int i = 0; i < n; i++)
			cin >> enemy[i];
		int m;
		cin >> m;
		int power[m];
		int day[m];
		int dp[n + 1];
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < m; i++)
		{
			cin >> power[i];
			cin >> day[i];
			dp[day[i]] = max(dp[day[i]], power[i]);
		}
		for (int i = n - 1; i >= 1; i--)
			dp[i] = max(dp[i], dp[i + 1]);
		bool flag = true;
		int now = 0, ans = 0;


		while (now < n)
		{
			ans++;
			int count = 1;
			int high = enemy[now];
			while (now < n && dp[count] >= high)
			{
				now++;
				count++;
				high = max(high, enemy[now]);

			}
			if (count == 1)
			{
				flag = false;
				break;
			}
		}
		if (!flag)
			cout << -1 << endl;
		else
			cout << ans << endl;
	}
	return 0;
}