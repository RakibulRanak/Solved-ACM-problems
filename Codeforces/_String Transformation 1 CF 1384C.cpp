#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void solve(ll cs) {
	int n;
	cin >> n;
	string s1, s2;
	cin >> s1 >> s2;
	vector<vector<int>>vec(21);
	for (int i = 0; i < n; i++)
	{
		int temp = s1[i];
		temp -= 96;
		int temp2 = s2[i];
		temp2 -= 96;
		vec[temp].push_back(temp2);
	}
	int ans = 0;
	bool hobe = true;
	for (int i = 1; i <= 20 ; i++)
	{
		int low = 30;
		int count = 0;
		for (int j = 0; j < vec[i].size(); j++)
		{
			//int hudai = low;

			if (i != vec[i][j])
				low = min(low, vec[i][j]);
			//cout << i << " " << vec[i][j] << endl;
			if (vec[i][j] != i)
				count = 1;

		}
		//cout << low << endl;
		ans += count;

		if (low != 30 && vec[i].size() != 0 && (low < i || low > 20))
		{
			hobe = false;
			break;
		}
		else
		{
			for (int j = 0; j < vec[i].size(); j++)
			{
				if (vec[i][j] > low)
					vec[low].push_back(vec[i][j]);
			}
		}
		vec[i].clear();

	}
	if (hobe)
		cout << ans << endl;
	else
		cout << -1 << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}