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
	string s;
	cin >> s;
	cin >> k;
	n = s.size();
	vector<int>vec1(n, 1), vec2(n, 1);
	loop(i, 0, n - 1)
	vec1[i] = s[i] - 48;
	bool ans = true;
	loop(i, 0, n - 1)
	{
		if (vec1[i] == 0)
		{
			if (k <= i)
			{
				vec2[i - k] = 0;
			}
			if (i + k < n)
			{
				vec2[i + k] = 0;
			}
		}
	}
	loop(i, 0, n - 1)
	{
		if (vec1[i] == 1)
		{
			bool a1 = true, a2 = true;

			if (k > i)
			{
				a1 = false;

			}
			if (i + k >= n)
			{
				a2 = false;
			}
			if (!a1 && !a2)
			{
				ans = false;
				break;
			}
			else if (!a1 && !vec2[i + k])
			{
				ans = false;
				break;
			}
			else if (!a2 && !vec2[i - k])
			{
				ans = false;
				break;
			}
			else if (a1 && a2 && vec2[i - k] + vec2[i + k] == 0)
			{
				ans = false;
				break;
			}
		}
	}
	if (ans)
	{
		loop(i, 0, n - 1)
		{
			cout << vec2[i];
		}
		cout << endl;
	}
	else
	{
		cout << -1 << endl;
	}


}

int main() {
	FastIO;
	int t;
	cin >> t;
	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}