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
	ll n, ans = 0;
	cin >> n;
	string s;
	cin >> s;
	map<ll, ll>m;
	ll sum = 0;
	m[0] = 1;
	for (int i = 0; i < n; i++)
	{
		sum += (s[i] - 49);
		ans += m[sum];
		m[sum]++;
	}
	cout << ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}