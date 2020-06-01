#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int ara[n];
	for (int i = 0; i < n; i++)
		cin >> ara[i];
	sort(ara, ara + n);
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		if (ara[i] == -1)
			continue;
	
		for (int j = i+1; j < n; j++)
		{
			if (ara[j] % ara[i] == 0)
			{
				ara[j] = -1;
			}
		}
		ans++;
	}

	cout << ans << endl;
	return 0;
}