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


void solve() {
	int n;
	cin >> n;
	cout << 4 + n * 3 << endl;
	n += 1;
	for (int i = 0; i <= n; i++)
	{
		for (int j = max(0, n - 1 - i); j <= min(n, n - i + 1); j++)
		{
			cout << i << " " << j << endl;
		}
	}
}

int main() {
	FastIO;
	solve();

	return 0;
}