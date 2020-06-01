#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
	ll n, k;
	cin >> n >> k;
	if (n > 2)
	{
		cout << 2 * k << endl;
	}
	else if (n == 2)
	{
		cout << k << endl;
	}
	else
		cout << 0 << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}