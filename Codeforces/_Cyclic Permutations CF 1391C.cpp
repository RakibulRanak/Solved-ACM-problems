#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

int main() {
	ll n;
	ll res, fact;
	cin >> n;
	res = 1;
	fact = 1;
	for (int i = 1; i <= n - 1; i++) {
		res *= 2;
		fact *= i;
		fact %= MOD;
		res %= MOD;
	}
	fact *= n;
	fact %= MOD;
	fact -= res;
	fact %= MOD;
	if (fact < 0)fact += MOD;
	cout << fact;
	return 0;
}