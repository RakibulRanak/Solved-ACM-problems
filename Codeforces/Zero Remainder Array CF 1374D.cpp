#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




void solve(ll cs) {
	ll n, k;
	cin >> n >> k;
	ll ara1[n], ara2[n];
	map<ll, ll>m1, m2;
	for (int i = 0; i < n; i++)
	{
		cin >> ara1[i];
	}
	sort(ara1, ara1 + n);
	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		ll now = ara1[i];
		ll lage;
		if (now % k == 0) {
			lage = 0;
			ara2[i] = 0;
		}
		else {
			lage = k - (now % k);
			ans = 1;
			ara2[i] = lage + m1[lage] * k;
			m1[lage]++;
		}


	}

	sort(ara2, ara2 + n);
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << ara2[i] << " ";
	// }
	// cout << endl;
	ans += ara2[0];
	for (int i = 1; i < n; i++)
	{
		ans += ara2[i] - ara2[i - 1];
	}
	cout << ans << endl;


}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}