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
	int ara[n];
	for (int i = 0; i < n; i++)
		cin >> ara[i];
	sort(ara, ara + n);
	int ans = 1;
	for (int i = 1; i < n; i++)
	{
		if (ara[i] - ara[i - 1] > 1)
		{
			ans = 0;
			break;
		}
	}
	if (ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}