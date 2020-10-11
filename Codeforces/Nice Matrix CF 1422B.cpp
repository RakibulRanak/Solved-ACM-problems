#include <bits/stdc++.h>
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);
#define loop(i, a, b) for (ll i = a; i <= b; i++)
#define endl '\n'
typedef long long ll;


void solve(ll cs)
{
	ll n, m;
	cin >> n >> m;
	ll ara[n + 1][m + 1];
	ll ara2[n + 1][m + 1];
	ll ara1[n + 1][m + 1];
	loop(i, 1, n)
	{
		loop(j, 1, m)
		{
			cin >> ara[i][j];
			ara2[i][j] = 0;
			ara1[i][j] = 0;
		}
	}
	ara2[0][0] = 0;
	ara1[0][0] = 0;
	ara2[0][1] = 0;
	ara1[0][1] = 0;
	ara2[1][0] = 0;
	ara1[1][0] = 0;
	ll sum = 0;
	loop(i, 1, (n + 1) / 2)
	{

		loop(j, 1, (m + 1) / 2)
		{	vector <ll> vec;
			ll r, d;
			ll temp = 0;
			r = (m - j) + 1;
			d = (n - i) + 1;
			ll div = 1;
			temp = ara[i][j];
			vec.push_back(temp);
			ara2[i][j] = 1;
			if (ara2[i][r] == 0)
			{
				div++;
				ara2[i][r] = 1;
				temp = ara[i][r];
				vec.push_back(temp);
			}
			if (ara2[d][j] == 0)
			{
				div++;
				ara2[d][j] = 1;
				temp = ara[d][j];
				vec.push_back(temp);
			}
			if (ara2[d][r] == 0)
			{
				div++;
				ara2[d][r] = 1;
				temp = ara[d][r];
				vec.push_back(temp);
			}
			ll ans;
			sort(vec.begin(), vec.end());
			if (vec.size() >= 3)
			{
				ans = vec[1];
			}
			else
			{
				ans = vec[0];
			}

			ll sum1 = 0, sum2 = 0;
			ara1[i][j] = 1;
			sum += abs(ara[i][j] - ans);
			if (ara1[i][r] == 0)
			{
				ara1[i][r] = 1;
				sum += abs(ara[i][r] - ans);

			}
			if (ara1[d][j] == 0)
			{
				ara1[d][j] = 1;
				sum += abs(ara[d][j] - ans);
			}
			if (ara1[d][r] == 0)
			{
				ara1[d][r] = 1;
				sum += abs(ara[d][r] - ans);
			}
		}
	}
	cout << sum << endl;
}

int main()
{
	FastIO;
	ll t;
	cin >> t;

	for (ll i = 0; i < t; i++)
		solve(i + 1);

	return 0;
}