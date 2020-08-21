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
	int n;
	cin >> n;
	if (n < 31)
		cout << "NO" << endl;
	else
	{
		cout << "YES" << endl;
		int tt = n - 30;
		if (tt == 6)
		{
			cout << "6 10 15 5";
		}
		else if (tt == 10)
		{
			cout << "6 10 15 9";
		}
		else if (tt == 14)
		{
			cout << "6 10 15 13";
		}
		else
		{
			cout << "6 10 14 " << tt;
		}
		cout << endl;
	}
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}