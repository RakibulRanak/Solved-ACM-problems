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
	ll n, x;
	cin >> n >> x;
	ll ara[n];
	for (int i = 0; i < n; i++)
		cin >> ara[i];
	ll sum = 0;
	ll count = 0, eq = 2;
	for (int i = 0; i < n; i++)
	{
		if (x == ara[i])
		{
			sum += x - ara[i];
			eq = 1;
		}

		else
		{
			sum += x - ara[i];
			count = 1;
		}
	}
	//cout << sum << endl;
	if (sum == 0)
	{
		cout << count << endl;
	}
	else
	{
		cout << eq << endl;
	}

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}