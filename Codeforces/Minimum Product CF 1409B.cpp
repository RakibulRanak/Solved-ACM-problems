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
	ll a, b, x, y, ans1, ans2, op;
	cin >> a >> b >> x >> y >> op;
	//
	ll t1 = min(a - x, op);
	//cout << t1 << endl;
	ll op2 = min(op, (a - x + b - y));
	ans1 = (a - t1) * (b - (op2 - t1));
	//cout << ans1 << endl;
	ll t2 = min(b - y, op);
	//cout << t2 << endl;
	ans2 = (b - t2) * (a - (op2 - t2));

	cout << min(ans1, ans2) << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}