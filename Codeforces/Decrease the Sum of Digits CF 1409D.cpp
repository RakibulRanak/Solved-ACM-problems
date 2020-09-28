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
	ll n;
	cin >> s >> n;
	ll sum = 0;
	for (ll i = 0; i < s.size(); i++)
	{
		sum += s[i] - 48;
	}
	ll move = 0;
	ll d = 1;
	s = '0' + s;
	for (ll i = s.size() - 1; i > 0; i--)
	{

		if (sum <= n)
		{
			break;
		}
		ll temp = s[i] - 48;
		if (temp == 0) {
			d *= 10;
			continue;
		}
		sum -= temp;
		int p = i - 1;
		while (s[p] == '9')
		{
			sum -= 9;
			s[p] = '0';
			p--;
		}
		s[p]++;
		sum += 1;

		ll baki = 10 - temp;
		move += baki * d;
		d *= 10;

	}
	cout << move << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}