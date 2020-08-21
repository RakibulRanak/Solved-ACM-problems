#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void solve(ll cs) {
	ll n;
	cin >> n;
	ll ara[n];
	for (int i = 0; i < n; i++)
		cin >> ara[i];
	ll count = 0;
	for (int i = 1; i < n; i++)
	{
		ara[i] += count;
		if (ara[i] < ara[i - 1])
		{
			ll temp = ara[i - 1] - ara[i];
			count += temp;
			ara[i] = ara[i - 1];
		}
	}
	cout << count << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}