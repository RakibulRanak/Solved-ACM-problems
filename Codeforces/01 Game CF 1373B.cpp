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
	string s;
	cin >> s;
	string ans = "";
	int move = 0;
	bool ghura = true;
	while (ghura) {
		ghura = false;
		for (int i = 0; i < s.size(); i++)
		{
			if (i + 1 == s.size())
				ans += s[i];
			else if (s[i] == s[i + 1])
			{
				ans += s[i];
			}
			else
			{
				ghura = true;
				i++;
				move++;
			}
		}
		//cout << ans << endl;
		s = ans;
		ans = "";
	}
	if (move % 2 == 0)
		cout << "NET" << endl;
	else
		cout << "DA" << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}