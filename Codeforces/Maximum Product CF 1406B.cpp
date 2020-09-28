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
	int pos = 0, neg = 0;
	ll ara[n];
	for (int i = 0; i < n; i++) {
		cin >> ara[i];
		if (ara[i] > 0)
			pos++;
		else if (ara[i] < 0)
			neg++;
	}
	ll ans = 1;
	sort(ara, ara + n);

	ll temp = ara[n - 1] * ara[n - 2] * ara[n - 3] * ara[n - 4] * ara[n - 5];
	ans = temp;
	temp = ara[n - 1] * ara[n - 2] * ara[n - 3] * ara[0] * ara[1];
	ans = max(ans, temp);
	temp = ara[n - 1] * ara[2] * ara[3] * ara[0] * ara[1];
	ans = max(ans, temp);

	cout << ans << endl;

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}