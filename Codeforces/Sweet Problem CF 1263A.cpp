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
		int ara[3];
		cin >> ara[0] >> ara[1] >> ara[2];
		sort(ara, ara + 3, greater<int>());

		long long ans;

		int temp = ara[0] - ara[1];
		if (temp >= ara[2]) {
			ans = ara[2];
			ans += ara[1];
		}

		else if (temp == 0)
		{

			ans = (ara[2] / 2) * 2;
			int temp2 = ara[2] / 2;
			ara[1] = ara[1] - temp2;
			ans += (ara[1]);

		}

		else
		{
			ans = temp;
			ara[0] = ara[1];
			ara[2] -= temp;
			ans += (ara[2] / 2) * 2;
			int temp2 = ara[2] / 2;
			ara[1] = ara[1] - temp2;
			ans += (ara[1]);

		}
		cout << ans << endl;
	}


	return 0;
}