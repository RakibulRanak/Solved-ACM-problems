#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll log2bal(ll x)
{
	ll i = 1, count = 0;
	while (i * 2 <= x) {
		i *= 2; count++;
	}
	return count;
}


void solve() {
	int n;
	cin >> n;
	int ara1[n], ara2[n];
	map<int, int>m1, m2;
	for (int i = 0; i < n; i++)
	{
		cin >> ara1[i];
		m1[ara1[i]] = i;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> ara2[i];
		m2[ara2[i]] = i;
	}
	vector<vector<int>>vecl(n);
	vector < vector<int >> vecr(n);
	for (int i = 0; i < n; i++)
	{
		int first = ara1[i];
		int sindex = m2[first];
		//cout << first << endl;
		int l, r;
		if (sindex > i)
		{
			l = sindex - i;
			r = (n - 1 - sindex) + (i + 1);
		}
		else if (sindex < i)
		{
			l = (sindex ) + (n - i);
			r = i - sindex;
		}
		else
		{
			l = 0;
			r = 0;
		}
		vecl[l].push_back(1);
		vecr[r].push_back(1);
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int s1, s2;
		s1 = vecl[i].size();
		s2 = vecr[i].size();
		ans = max(ans, s1);
		ans = max(ans, s2);


	}
	cout << ans << endl;

}

int main() {
	FastIO;
	solve();

	return 0;
}