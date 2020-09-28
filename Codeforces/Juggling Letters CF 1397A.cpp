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
	map<char, int>m;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int  j = 0; j < s.size(); j++)
		{
			m[s[j]]++;
		}
	}
	bool ans = true;
	for (char x = 'a'; x <= 'z'; x++)
	{
		if (m[x] % n != 0)
		{
			ans = false;
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