#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
void solve(ll cs) {
	int n;
	cin >> n;
	vector<int>vec;
	for (int i = 0; i < n; i++)
	{
		int test;
		cin >> test;
		vec.push_back(test);
	}
	sort(vec.begin(), vec.end());
	bool ghura = true;
	int amount = 1;
	int i = 1;
	while (i <= n)
	{
		auto lower = upper_bound (vec.begin(), vec.end(), i);
		int now = lower - vec.begin();
		//cout << now << endl;
		if (now >= i)
		{
			amount = now + 1;
		}
 
		i++;
 
	}
	cout << amount << endl;;
 
 
 
}
 
int main() {
	FastIO; ll t; cin >> t;
 
	for (ll i = 0; i < t; i++) solve(i + 1);
 
	return 0;
}