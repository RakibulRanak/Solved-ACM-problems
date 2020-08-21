#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




void solve(ll cs) {
	int n;
	cin >> n;
	int ara[n];
	for (int i = 0; i < n; i++)
		cin >> ara[i];
	if (ara[0] + ara[1] <= ara[n - 1])
		cout << 1 << " " << 2 << " " << n << endl;
	else
		cout << -1 << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}