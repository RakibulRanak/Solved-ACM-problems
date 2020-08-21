#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




void solve(ll cs) {
	int n, m;
	cin >> n >> m;
	//int  ara[n][m];
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			char c;
			cin >> c;
			if (j == m - 1 && c == 'R')
				ans++;
			if (i == n - 1 && c == 'D')
				ans++;
		}
	}
	cout << ans << endl;

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}