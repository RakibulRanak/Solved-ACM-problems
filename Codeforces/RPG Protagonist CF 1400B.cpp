#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

ll log2bal(ll x)
{
	ll i = 1, count = 0;
	while (i * 2 <= x)
	{
		i *= 2;
		count++;
	}
	return count;
}

void solve(ll cs)
{
	ll me, f, s, a, sw, aw;
	cin >> me >> f >> s >> a >> sw >> aw;
	if (aw < sw)
	{
		swap(aw, sw);
		swap(s, a);
	}
	ll ans = 0;
	for (ll i = 0; i * sw <= me; i++)
	{
		if (i > s)
			break;
		ll temp = 0;
		ll s2 = s, f2 = f, me2 = me, a2 = a, sw2 = sw, aw2 = aw;
		temp += i;
		s2 -= i;
		me2 -= (i * sw2);
		ll j = min(s2, f2 / sw2);
		temp += j;
		f2 -= (j * sw2);
		j = min(a2, me2 / aw2);
		temp += j;
		a2 -= j;
		j = min(a2, f2 / aw2);
		temp += j;
		ans = max(ans, temp);
	}
	cout << ans << endl;
}

int main()
{
	FastIO;
	ll t;
	cin >> t;

	for (ll i = 0; i < t; i++)
		solve(i + 1);

	return 0;
}