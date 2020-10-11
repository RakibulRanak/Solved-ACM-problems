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
int column[1000];
int diag1[1000];
int diag2[1000];
int total;
int n;
bool ret = false;
stack<int> s;
map<int, int> m;

//column size would be n,diag1=diag2=2n-1

void search(int y)
{
	if (y == n)
	{
		total++;
		int h = n * n - 1;
		for (int i = n - 1; i >= 0; i--)
		{
			int t = s.top();
			s.pop();
			for (int j = n - 1; j >= 0; j--)
			{
				if (t == j)
					m[h] = 1;
				else
					m[h] = 0;
				h--;
			}
		}
		ret = true;
		//cout << "HI" << endl;
		return;
	}
	for (int x = 0; x < n; x++)
	{
		if (ret)
			return;
		if (column[x] || diag1[x + y] || diag2[x - y + n - 1])
			continue;
		column[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
		s.push(x);
		search(y + 1);
		column[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
		s.pop();
	}
}

//compare vector of pairs 1st value descending second value ascending
bool Compare(pi p1, pi p2)
{
	return p1.first > p2.first || (p1.first == p2.first && p1.second < p2.second);
};

ll log2bal(ll x)
{
	ll i = 1, count = 0;
	while (i * 2 <= x)
		i *= 2;
	count++;
	return count;
}
ll power(ll m, ll n)
{
	//m^n
	if (n == 0)
		return 1;
	if (n % 2 == 0)
		return power(m * m, n / 2);
	else
		return m * power(m * m, (n - 1) / 2);
}

void solve()
{
	cin >> n;
	search(0);
	if (total == 0)
		cout << "Not possible" << endl;
	else
	{
		int x = 0;
		for (int i = n - 1; i >= 0; i--)
		{

			for (int j = n - 1; j >= 0; j--)
			{
				cout << m[x] << " ";
				x++;
			}
			cout << endl;
		}
		cout << endl;
	}
}

int main()
{
	FastIO;

	solve();

	return 0;
}