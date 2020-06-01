#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll smallestDivisor(int n)
{
	// if divisible by 2
	if (n % 2 == 0)
		return 2;

	// iterate from 3 to sqrt(n)
	for (ll i = 3; i * i <= n; i += 2) {
		if (n % i == 0)
			return i;
	}

	return n;
}

void solve(ll cs) {
	ll k, num;
	cin >> k >> num;
	ll small = smallestDivisor(k);
	ll ans = k;
	ans += (num - 1) * 2 + small;
	cout << ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}