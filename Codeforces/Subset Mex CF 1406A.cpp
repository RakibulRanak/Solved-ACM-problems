#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll log2bal(ll x)
{
	ll i = 1, count = 0;
	while (i * 2 <= x) {
		i *= 2; count++;
	}
	return count;
}


void solve(ll cs) {
	int t;
	cin >> t;
	map<int, int>m;
	for (int i = 0; i < t; i++)
	{
		int temp;
		cin >> temp;
		m[temp]++;
	}
	bool both = false;
	int ans1 = 0, ans2 = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (!both)
		{
			if (m[i] == 1)
			{
				both = true;
				ans1 = i;
			}
			else if (m[i] == 0)
			{
				both = true;
				ans1 = i;
				ans2 = i;
				break;
			}
		}
		else
		{
			if (m[i] == 0) {
				ans2 = i;
				break;
			}

		}
	}
	cout << ans1 + ans2 << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}