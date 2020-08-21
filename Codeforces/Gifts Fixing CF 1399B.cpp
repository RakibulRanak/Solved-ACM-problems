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
	long long ara1[n], ara2[n];
	long long mcan = 10000000000, mor = 100000000000;
	for (int i = 0; i < n; i++) {
		cin >> ara1[i];
		mcan = min(mcan, ara1[i]);
	}
	for (int i = 0; i < n; i++) {
		cin >> ara2[i];
		mor = min(mor, ara2[i]);
	}

	ll ans = 0;
	for (int i = 0; i < n; i++) {
		ll cd = ara1[i] - mcan;
		ll od = ara2[i] - mor;
		ll del = min ( cd, od);
		ans += del;
		cd -= del;
		od -= del;
		ans += cd;
		ans += od;
	}
	cout << ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}