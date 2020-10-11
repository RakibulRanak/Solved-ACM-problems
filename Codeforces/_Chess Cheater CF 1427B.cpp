#include <bits/stdc++.h>
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);
#define loop(i, a, b) for (int i = a; i <= b; i++)
#define endl '\n'



void solve(int cs)
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<vector<int>> vec(n + 1);
	int i = 0;
	int ans = 0;
	while (i < n)
	{
		int si = 0;
		while (s[i] == 'W' && i < n)
		{
			si++;
			i++;
		}
		if (si > 0)
			ans += (si * 2) - 1;
		i++;
	}
	//cout << ans << endl;
	if (k == 0)
		ans = ans;
	else if (ans == 0)
	{
		ans += (min(k, n) * 2) - 1;
	}
	else {
		i = 0;
		while (i < n)
		{
			int si = 0;
			int ind = i;
			while (s[i] == 'L' && i < n)
			{
				si++;
				i++;
			}
			if (si)
				vec[si].push_back(ind);
			i++;
		}

		int z = -1, last = -1;
		bool sesh = false;
		loop(i, 1, n)
		{
			int lt = vec[i].size() - 1;
			loop(j, 0, lt)
			{
				if (vec[i][j] == 0 || i + vec[i][j] == n) {
					if (vec[i][j] == 0)
					{
						z = i;
					}
					else
					{
						last = i;
					}
					continue;
				}
				if (k < i)
				{
					ans += k * 2;
					k = 0;
					sesh = true;
					break;
				}
				ans += (i * 2) + 1;
				k -= i;
			}
			if (sesh)
				break;
		}
		if (k > 0)
		{
			int item = 0;
			if (z != -1)
			{
				item = min(k, z);
				k -= item;
				ans += 2 * item;
			}
			if (k > 0 && last != -1)
			{
				item = min(k, last);
				k -= item;
				ans += 2 * item;
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	FastIO;
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
		solve(i + 1);

	return 0;
}