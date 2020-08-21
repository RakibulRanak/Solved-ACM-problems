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
	int n;
	cin >> n;
	map<int, int>m;
	int temp;
	//int ara[n];
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		m[temp]++;
		//ara[i] = temp;
	}
	int res = 0;

	for (int i = 2; i <= 100; i++)
	{
		int ans = 0;
		for (int j = 1; j * 2 <= i ; j++)
		{

			int tt;
			if (i <= j)
				continue;
			if (i == j * 2)
			{
				tt = m[j] / 2;

			}
			else {
				tt = min(m[j] , m[i - j]);

			}
			ans += tt;
			//cout << "ans: " << i << " " << j << " " << ans << " " << tt << endl;
		}
		res = max(res, ans);
	}

	cout << res << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}