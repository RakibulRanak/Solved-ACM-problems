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
	int h, p;
	cin >> h >> p;
	while (h > 0)
	{
		h -= p;
		p /= 2;
		if (p == 0)
			break;
	}
	if (h <= 0)
		cout << 1 << endl;
	else
		cout << 0 << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}