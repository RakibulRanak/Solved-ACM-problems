#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		map<int, int>mm;
		for (int j = 0; j < m; j++)
		{

			if (j > 0 && s[j] == '.' && s[j - 1] == '.' && mm[j - 1] == 0)
			{
				sum -= x;
				sum += min((2 * x), y);
				if (y <= 2 * x)
				{
					mm[j] = 1;
				}
				//cout << "ba";
			}
			else if (s[j] == '.')
			{
				sum += x;

			}
			//cout << sum << endl;
		}

	}
	cout << sum << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}