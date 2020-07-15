#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void solve(ll cs) {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int first = n, last = -1;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1')
		{
			first = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (s[i] == '0')
		{
			last = i;
			break;
		}
	}
	if (last < first)
		cout << s << endl;
	else
	{
		cout << s.substr(0, first) << s.substr(last, n - last) << endl;
	}


}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}