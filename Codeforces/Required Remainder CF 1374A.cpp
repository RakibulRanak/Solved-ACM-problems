#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void solve(ll cs) {
	ll x, y, n;
	cin >> x >> y >> n;
	ll p = n / x;
	if (p * x + y <= n)
	{
		cout << p*x + y << endl;
	}
	else
		cout << (p * x) - (x - y) << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}