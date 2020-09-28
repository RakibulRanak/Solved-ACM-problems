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
	ll n;
	cin >> n;
	ll a = 1, sum = 1, sum2 = 1, i = 2, ans = 1;

	while (1)
	{
		ll j = (i * 2) - 1;
		ll temp = i * j;
		//sum += temp;
		if (sum + temp <= n)
		{
			ans++;
			sum += temp;
			//ara[p] = sum;
		}
		else
			break;
		//cout << i << " " << j << " " << temp << " " << sum << " " << sum2 << endl;
		i *= 2;


	}
	cout << ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}