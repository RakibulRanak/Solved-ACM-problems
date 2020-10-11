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


void solve() {
	ll n;
	cin >> n;
	string s1, s2;
	cin >> s1 >> s2;
	ll na = 0, nb = 0, nc = 0, nd = 0, a, b = 0, c = 0, d = 0;
	loop(i, 0, n - 1)
	{
		if (s1[i] == '0' && s2[i] == '0')
			na++;
		else if (s1[i] == '0' && s2[i] == '1')
			nb++;
		else if (s1[i] == '1' && s2[i] == '0')
			nc++;
		else
			nd++;
	}
	//cout << na << " " << nb << " " << nc << " " << nd << endl;
	bool ans = false;
	for (b = 0 ; b <= nb; b++)
	{
		for (d = 0; d <= nd; d++)
		{
			c = nb + nd - b - 2 * d;
			a = n / 2 - b - c - d;
			if (d * 2 + b + c == nb + nd && 2 * (a + b + c + d) == n && c >= 0 && c <= nc && a >= 0 && a <= na)
			{
				//cout << b << " " << c << " " << d << endl;
				ans = true;
				break;
			}
		}
		if (ans)
			break;
	}
	if (!ans)
		cout << -1 << endl;
	else
	{
		loop(i, 0, n - 1)
		{
			if (s1[i] == '0' && s2[i] == '0' && a)
			{
				a--;
				cout << i + 1 << " ";
			}
			else if (s1[i] == '0' && s2[i] == '1' && b) {
				b--;
				cout << i + 1 << " ";
			}
			else if (s1[i] == '1' && s2[i] == '0' && c) {
				c--;
				cout << i + 1 << " ";
			}
			else if (s1[i] == '1' && s2[i] == '1' && d) {
				d--;
				cout << i + 1 << " ";
			}
		}
		cout << endl;

	}

}

int main() {
	FastIO;
	solve();
	return 0;
}