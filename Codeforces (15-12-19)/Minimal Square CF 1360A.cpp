#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
	int a, b;
	cin >> a >> b;
	if (a < b)
		swap(a, b);
	b += b;
	if (b < a)
		b = a;
	cout << b*b << endl;

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}