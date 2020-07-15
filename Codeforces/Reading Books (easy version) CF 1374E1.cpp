#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void solve() {
	ll n, k;
	cin >> n >> k;
	vector<ll>alice, bob, both;
	for (ll i = 0; i < n; i++)
	{
		ll a, b, c;
		cin >> a >> b >> c;
		if (b + c == 2)
		{
			both.push_back(a);
		}
		else if (b == 1)
		{
			alice.push_back(a);
		}
		else if (c == 1)
		{
			bob.push_back(a);
		}
	}
	ll nalice = alice.size();
	ll nbob = bob.size();
	ll nboth = both.size();
	//cout << nboth << " " << nalice << " " << nbob << endl;

	ll minab = min(nalice, nbob);
	ll mincommon, maxcommon;
	if (minab >= k) {

		mincommon = 0;
		maxcommon = min(k, nboth);
	}
	else
	{
		mincommon = k - minab;
		maxcommon = min(k , nboth);
	}
	sort(alice.begin(), alice.end());
	sort(bob.begin(), bob.end());
	sort(both.begin(), both.end());

	for (ll i = 1; i < nalice; i++)
	{
		alice[i] += alice[i - 1];
	}
	for (ll i = 1; i < nbob; i++)
	{
		bob[i] += bob[i - 1];
	}
	for (ll i = 1; i < nboth; i++)
	{
		both[i] += both[i - 1];
	}
	ll ans = 10000000000000000;
	ll flag = 0;
	//cout << mincommon << " " << maxcommon << endl;
	for (ll i = mincommon; i <= maxcommon; i++)
	{
		ll commonthekepai ;
		if (i == 0)
			commonthekepai = 0;
		else
			commonthekepai = both[i - 1];

		ll alicetheke;
		if (i == k)
			alicetheke = 0;
		else
			alicetheke = alice[k - i - 1];

		ll bobtheke;
		if (i == k)
			bobtheke = 0;
		else
			bobtheke = bob[k - i - 1];
		ll sum = commonthekepai + alicetheke + bobtheke;
		ans = min(ans, sum);
		flag = -1;
	}
	if (flag == 0)
		cout << -1 << endl;
	else
		cout << ans << endl;

}

int main() {
	FastIO;
	solve();

	return 0;
}