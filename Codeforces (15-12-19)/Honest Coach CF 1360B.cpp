#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
	int n;
	cin >> n;
	int ara[n];
	for (int i = 0; i < n; i++)
		cin >> ara[i];
	sort(ara, ara + n);
	int ans = 1000000;
	for (int i = 1; i < n; i++) {
		ans = min(ara[i] - ara[i - 1], ans);
	}

	cout << ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}