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
	ll z1, z2, o1, o2, t1, t2;
	cin >> z1 >> o1 >> t1 >> z2 >> o2 >> t2;
	ll ans = 0;

	ll two = min (t1, o2);
	ans += 2 * two;
	t1 -= two;
	o2 -= two;
	two = min(t1, t2);
	t1 -= two;
	t2 -= two;
	two = min(t1, z2);
	t1 -= two;
	z2 -= two;
	//t1 sesh
	two = min(t2, z1);
	t2 -= two;
	z1 -= two;
	two = min(t2, o1);
	ans -= 2 * two;
	cout << ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}