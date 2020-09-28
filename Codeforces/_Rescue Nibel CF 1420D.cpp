#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod 998244353
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
#define pii acos(-1)

//compare vector of pairs 1st value descending second value ascending
bool Compare(pi p1, pi p2) {
	return p1.first > p2.first || (p1.first == p2.first && p1.second < p2.second);
};

ll fac[300001];
ll invfac[300001];
ll power(ll m, ll n)
{
	//m^n
	if (n == 0) return 1;
	if (n % 2 == 0) return power((m * m) % mod, n / 2);
	else return (m * power((m * m) % mod, (n - 1) / 2)) % mod;
}
void fact()
{
	fac[0] = 1;
	loop(i, 1, 300000)
	{
		fac[i] = (fac[i - 1] * i) % mod;
	}
	loop(i, 0, 300000)
	{
		invfac[i] = power(fac[i], mod - 2) % mod;
	}
}

ll nCr(ll n, ll r)
{
	if (r > n)
		return 0;
	ll num = (invfac[r] * invfac[n - r]) % mod;
	return (fac[n] * num) % mod;
}


void solve() {
	ll n, k;
	cin >> n >> k;
	vector<pi>vec;
	mymap m, start;
	//cout << invfac[4] << endl;
	loop(i, 0, n - 1)
	{
		ll a, b;
		cin >> a >> b;
		start[a]++;
		m[a]++;
		m[b + 1]--;

	}
	ll count = 0;
	ll total = 0;
	for (auto x : m)
	{
		total += x.second;
		ll st = start[x.first];
		ll sob = 0, bad = 0;
		sob = nCr(total, k);
		bad = nCr(total - st, k);
		count += sob - bad;
		count %= mod;

	}
	cout << (count % mod + mod) % mod << endl;


}

int main() {
	FastIO;
	fact();
	solve();

	return 0;
}