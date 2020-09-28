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
	string s;
	cin >> s;
	int jur = 0, bijur = 0;
	for (int i = 0; i < n; i++)
	{
		if ((s[i] - 48) % 2 == 0 && i % 2 == 1)
			jur = 1;
		if ((s[i] - 48) % 2 == 1 && i % 2 == 0)
			bijur = 1;
	}

	if (n % 2 == 0)
	{
		if (jur)
			cout << 2 << endl;
		else
			cout << 1 << endl;
	}
	else
	{
		if (bijur)
			cout << 1 << endl;
		else
			cout << 2 << endl;
	}

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}