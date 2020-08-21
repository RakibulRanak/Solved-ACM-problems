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
	int temp;
	cin >> temp;
	int ans = n;
	for (int i = 1; i < n; i++)
	{
		int x;
		cin >> x;
		if (temp != x)
		{
			ans = 1;
		}
	}
	cout << ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}