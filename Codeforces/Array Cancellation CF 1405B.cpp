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
	ll pos = 0, neg = 0;
	for (int i = 0; i < n; i++)
	{
		ll temp;
		cin >> temp;
		if (temp > 0)
		{
			pos += temp;
		}
		else if (temp < 0)
		{
			ll tt = -1 * temp ;
			ll z = 0;
			neg += max(z, tt - pos);
			pos = max(z, pos + temp);

		}
	}
	cout << neg << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}