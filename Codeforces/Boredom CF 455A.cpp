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
mymap m;
ll ara[100001];
bool vis[100001];

ll dp(ll big)
{
	if (big <= 0)
		return 0;
	else if (big == 1)
		return m[big];
	else if (vis[big])
		return ara[big];
	else {
		ara[big] = max(dp(big - 1), dp(big - 2) + m[big]);
		vis[big] = true;
		return ara[big];
	}
}
void solve() {
	ll n;
	cin >> n;
	ll big = 0;
	loop(i, 0, n - 1)
	{
		ll temp;
		cin >> temp;
		m[temp] += temp;
		big = max(big, temp);
	}
	cout << dp(big) << endl;

}

int main() {
	FastIO;
	solve();
	return 0;
}