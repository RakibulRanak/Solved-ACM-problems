#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void solve(ll cs) {
	ll x;
	cin >> x;
	int ans = 0;
	while (x != 1)
	{
		int t = 0;
		if (x % 6 == 0) {
			x /= 6;
			t = 1;
		}
		else
			x *= 2;
		ans++;
		if (t == 0)
		{
			if (x % 6 != 0) {
				ans = -1;
				break;
			}
		}

	}
	cout << ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}