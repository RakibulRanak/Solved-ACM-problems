#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll product(vector<ll>vec)
{
	ll ans = 1;
	for (auto x : vec)
	{
		ans *= x;
	}
	return ans;
}


void solve() {
	vector<ll>vec(10, 1);
	string s = "codeforces";
	ll k;
	cin >> k;
	int i = 0;
	while (product(vec) < k)
	{
		vec[i]++;
		i++;
		i %= 10;
	}
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < vec[i]; j++)
			cout << s[i];
	}
	cout << endl;


}

int main() {
	FastIO; ll t; solve();

	return 0;
}