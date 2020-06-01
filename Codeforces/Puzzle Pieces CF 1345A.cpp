#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
	int n, m;
	cin >> n >> m;
	if (n < m)
		swap(n, m);

	if (m == 1)
	{
		cout << "YES" << endl;
	}
	else if (n <= 2 && m <= 2)
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}