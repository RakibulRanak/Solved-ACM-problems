#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void solve(ll cs) {
	string s;
	cin >> s;
	int ans = 0;
	for (char i = '0'; i <= '9'; i++)
	{
		for (char j = '0'; j <= '9'; j++)
		{
			int flip = 0;
			int count = 0;
			int bal = 0;
			for (int k = 0; k < s.size(); k++)
			{
				if (i == j && s[k] == i)
				{
					bal++;
				}
				if (!flip && s[k] == i)
				{
					flip = 1;
					//count++;
				}
				else if (flip && s[k] == j)
				{
					flip = 0;
					count++;
				}
			}
			ans = max(2 * count, ans);
			ans = max(ans, bal);
		}
	}
	cout << s.size() - ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}