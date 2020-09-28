#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define S second
#define pb push_back
#define F first
#define loop(i,a,b) for (ll i = a; i <= b; i++)
#define all(x) x.begin(),x.end()
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
typedef map<ll, ll> mymap;

ll log2bal(ll x)
{
	ll i = 1, count = 0;
	while (i * 2 <= x)
		i *= 2; count++;
	return count;
}
ll power(ll m, ll n)
{
	//m^n
	if (n == 0) return 1;
	if (n % 2 == 0) return power(m * m, n / 2);
	else return m * power(m * m, (n - 1) / 2);
}


void solve(ll cs) {
	ll n, q;
	cin >> n >> q;
	ll ara[n + 2];
	ara[0] = 0;
	ara[n + 1] = 0;
	loop(i, 1, n)
	{
		cin >> ara[i];
	}
	bool peak = true;
	ll ans = 0;
	ll lastfall = 0;
	loop(i, 1, n)
	{
		if (peak && ara[i] > ara[i - 1] && ara[i] > ara[i + 1])
		{
			ans += ara[i];
			peak = false;
		}
		else if (!peak && ara[i] < ara[i - 1] && ara[i] < ara[i + 1])
		{
			ans -= ara[i];
			peak = true;
			lastfall = ara[i];
		}
	}
	if (peak)
		ans += lastfall;
	cout << ans << endl;

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}