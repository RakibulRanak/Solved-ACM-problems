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
	int ara[n + 2];
	for (int i = 0; i < n; i++)
		cin >> ara[i];
	ara[n] = 0;
	ara[n + 1] = 0;
	int i = 1;
	int turn = 0;
	int ans = 0;
	if (ara[0] == 1)
		ans++;

	while (i < n)
	{
		if (ara[i] + ara[i + 1] + ara[i + 2] == 3) {
			ans++;
			i += 3;
		}
		else
			i++;
	}
	cout << ans << endl;

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}