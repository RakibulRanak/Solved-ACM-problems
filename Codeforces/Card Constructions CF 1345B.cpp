#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
set<ll>myset;
void solve(ll cs) {
	int val;
	cin >> val;
	ll koyta = val;
	ll count = 0;
	while (val > 1)
	{
		auto it = myset.upper_bound(val);
		it--;
		//cout << (*it) << endl;
		koyta = (*it);
		val -= koyta;
		count++;

	}
	cout << count << endl;

}


int main() {
	FastIO;


	ll temp = 0;
	int i = 1;
	myset.insert(0);
	while (temp < 1000000000)
	{
		temp = (i * 2) + (i - 1) + temp;
		//cout << temp << endl;
		myset.insert(temp);
		i++;
	}
	//cout << i << endl;


	ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;

}