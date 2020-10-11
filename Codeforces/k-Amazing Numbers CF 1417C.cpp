#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define S second
#define pb push_back
#define F first
#define loop(i,a,b) for (ll i = a; i <= b; i++)
#define all(x) x.begin(),x.end()
#define endl '\n'
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;
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
	ll n;
	cin >> n;
	map<ll, ll>lp, m , ans;
	loop(i, 1, n)
	{
		int temp;
		cin >> temp;
		m[temp] = max(m[temp], i - lp[temp]);
		lp[temp] = i;
	}
	loop(i, 1, n)
	{
		ans[i] = 10000000;
	}
	for (auto x : m)
	{
		x.second = max(x.second, (n + 1) - lp[x.first]);
		ans[x.second] = min(ans[x.second], x.first);
		//cout << x.first << " " << x.second << endl;
		//
	}
	ll t = -1;

	for (ll i = 1; i <= n; i++)
	{
		if (ans[i] == 10000000)
		{
			cout << t << " ";
		}
		else
		{

			if (t == -1) {
				t = ans[i];
			}
			else {

				t = min(t, ans[i]);

			}
			cout << t << " ";

		}

	}
	cout << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}