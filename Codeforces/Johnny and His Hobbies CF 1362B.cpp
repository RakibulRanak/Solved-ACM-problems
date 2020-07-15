#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {

	int n;
	cin >> n;
	int ara[n];
	map<int, int>m1;
	for (int i = 0; i < n; i++) {
		cin >> ara[i];
		m1[ara[i]] = 1;
	}
	int i = 0;
	vector<int>vec;
	for (int j = 1; j < n; j++)
	{
		int c = ara[i] ^ ara[j];
		//cout << c << endl;
		vec.push_back(c);

	}

	int ans = 10000000;
	for (int i = 0; i < vec.size(); i++)
	{
		int count = 0;

		for (int j = 0; j < n; j++)
		{
			int c = vec[i] ^ ara[j];
			if (m1[c] != 1)
			{
				break;
			}
			count++;
		}
		if (count == n)
		{
			ans = min(ans, vec[i]);
		}
	}
	//cout << ans << endl;
	if (ans == 10000000)
		cout << -1 << endl;
	else
		cout << ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}
