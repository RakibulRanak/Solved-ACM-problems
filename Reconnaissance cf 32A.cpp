#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, d;
	cin >> n >> d;
	int ara[n];
	for (int i = 0; i < n; i++) 
			cin>>ara[i];
	sort(ara, ara + n);
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int p = i + 1; p < n; p++)
		{
			if (ara[p] - ara[i] <= d)
			{
				count += 2;
			}
			else
				break;
		}
		ans += count;
	}
	cout << ans << endl;

}