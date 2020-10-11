#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);
#define mod 1000000007
#define S second
#define pb push_back
#define F first
#define loop(i, a, b) for (ll i = a; i <= b; i++)
#define all(x) x.begin(), x.end()
#define endl '\n'
typedef tree<int, null_type, less<int>, rb_tree_tag,
			 tree_order_statistics_node_update>
	indexed_set;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
typedef map<ll, ll> mymap;
#define pii acos(-1)

//compare vector of pairs 1st value descending second value ascending
bool Compare(pi p1, pi p2)
{
	return p1.first > p2.first || (p1.first == p2.first && p1.second < p2.second);
};
ll ara[10000001];
ll mult(ll a, ll b)
{
	return (a * b) % mod;
}
ll add(ll a, ll b)
{
	return (a + b) % mod;
}

void calc()
{
	ll temp = 1;
	ll ans = 0;
	ara[0] = 0;
	loop(i, 1, 10000000)
	{
		ans += mult(temp, i);
		ans = add(ans, mod);
		ara[i] = ans;
		temp = mult(temp, 10);
	}
}

void solve()
{
	string s;
	cin >> s;
	reverse(all(s));
	int n = s.size() - 1;
	ll sum = 0;
	ll p = 1;
	//cout << ara[10000001] << endl;
	loop(i, 0, n)
	{
		ll left = i, right = n - i;
		ll conl, conr;
		ll d = s[i] - 48;
		conl = mult(d, ara[left]);
		if (right % 2 == 0)
			conr = mult(mult(d, p), mult(right / 2, right + 1));
		else
			conr = mult(mult(d, p), mult(right, (right + 1) / 2));
		sum += add(conl, conr);
		p = mult(p, 10);
	}
	cout << ((sum % mod) + mod) % mod << endl;
}

int main()
{
	FastIO;
	calc();
	solve();
	return 0;
}