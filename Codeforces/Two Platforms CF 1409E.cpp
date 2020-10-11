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
	ll n, k;
	cin >> n >> k;
	mymap m1, m2, m3, sum1, maxi;
	vi vec;
	loop(i, 0, n - 1)
	{

		ll temp;
		cin >> temp;
		if (m3[temp] == 0)
			vec.push_back(temp);
		m1[temp]++;
		m1[temp + k + 1]--;
		m2[temp]++;
		m2[temp - k - 1]--;
		m3[temp]++;
	}
	loop(i, 0, n - 1)
	{
		ll temp;
		cin >> temp;
	}
	ll  sumL = 0, sumR = 0;
	for (auto x : m1)
	{
		sumL += x.second;
		sum1[x.first] = sumL;
	}
	ll temp = 0;
	for (auto it = m2.rbegin(); it != m2.rend(); it++) {
		sumR += it->second;
		temp = max(temp, sumR);
		maxi[it->first] = temp;
	}
	ll i = 0;
	ll j = vec.size() - 1;
	ll ans = m3[vec[0]];
	sort(all(vec));
	loop(i, 0, j - 1)
	ans = max(ans, sum1[vec[i]] + maxi[vec[i + 1]]);

	cout << ans << endl;

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}