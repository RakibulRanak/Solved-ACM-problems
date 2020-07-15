#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

map<ll, ll>m;
vector<ll>myvec;

ll log2bal(ll x)
{
	ll i = 1;
	ll count = 0;
	while (i * 2 <= x)
	{
		i *= 2;
		count++;
	}
	return count;
}



int main() {
	FastIO; ll t; cin >> t;


	for (ll i = 1; i <= 1000000000000000000; i *= 2)
	{

		m[i] = (i * 2) - 1;
		myvec.push_back(i);

	}

	while (t--)
	{
		ll n;
		cin >> n;

		ll answer = 0;
		while (n > 0)
		{
			ll present = log2bal(n);
			present = myvec[present];
			answer += m[present];
			n -= present;
		}

		cout << answer << endl;

	}


	return 0;
}