#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




void solve(ll cs) {
	int n;
	cin >> n;
	for (int i = n; i >= 1; i--)
		cout << i << " ";
	cout << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}