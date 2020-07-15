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
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<int>vec;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1')
			vec.push_back(i + 1);
	}
	int ans = 0;
	int l = 0, r = 0, Left = 0, Right = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		r = vec[i];
		Right = r - k;
		if (Right - Left > 1)
		{
			int box = Right - Left - 1;
			ans += 1 + ((box - 1) / (k + 1));
		}
		l = r;
		Left = l + k;
	}
	if (n - Left > 0)
	{
		int box = n - Left;
		ans += 1 + ((box - 1) / (k + 1));
	}
	cout << ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}