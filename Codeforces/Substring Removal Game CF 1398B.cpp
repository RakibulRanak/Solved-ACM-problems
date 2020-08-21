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


void solve(ll cs) {
	string s;
	cin >> s;
	vector<int>vec;
	int i = 0;
	while (i < s.size())
	{
		if (s[i] == '1')
		{
			int j = i + 1;
			int count = 1;
			while (j < s.size() && s[j] == '1')
			{
				count++;
				j++;
			}
			vec.push_back(count);
			i = j;
		}
		i++;
	}
	sort(vec.begin(), vec.end(), greater<int>());
	int ans = 0;
	for (int i = 0; i < vec.size(); i += 2)
		ans += vec[i];
	cout << ans << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}