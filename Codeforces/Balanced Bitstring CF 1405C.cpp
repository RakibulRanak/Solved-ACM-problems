#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void solve(ll cs) {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	bool ans = true;
	int one = 0, zero = 0, khali = 0;
	for (int i = 0; i < k; i++)
	{
		if (s[i] == '1')
			one++;
		else if (s[i] == '0')
			zero++;
	}

	if (one > k / 2 || zero > k / 2)
		ans = false;

	else
	{
		for (int i = 0; i < k; i++)
		{
			char a = s[i];
			bool confirm = false;
			if (a != '?')
				confirm = true;
			bool loop = true;
			int j = i + k;
			for (; j < n; j += k)
			{
				if (!confirm && s[j] != '?')
				{
					confirm = true;
					a = s[j];
				}
				if (confirm && (s[j] != a && s[j] != '?'))
				{
					ans = false;
					//cout << a << " " << s[j] << " " << i << " " << j << endl;
					loop = false;
					break;
				}
			}
			j -= k;
			for (; j >= 0; j -= k)
			{
				s[j] = a;
			}

			if (!loop)
				break;
		}
	}
	one = 0;
	zero = 0;
	for (int i = 0; i < k; i++)
	{
		if (s[i] == '1')
			one++;
		else if (s[i] == '0')
			zero++;
	}

	if (one > k / 2 || zero > k / 2)
		ans = false;

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