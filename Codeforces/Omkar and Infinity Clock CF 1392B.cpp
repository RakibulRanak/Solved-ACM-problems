#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void solve(ll cs) {
	ll n, k;
	cin >> n >> k;
	ll ara[n];
	bool zero = false, minus = false;
	ll high = -10000000000;
	for (int i = 0; i < n; i++)
	{
		cin >> ara[i];
		if (ara[i] == 0)
			zero = true;
		else if (ara[i] < 0)
			minus = true;
		high = max(high, ara[i]);
	}
	if (minus)
	{
		ll  hmax = -10000000000;
		for (int i = 0; i < n; i++) {
			ara[i] = high - ara[i];
			hmax = max(hmax, ara[i]);
		}
		ll ara2[n];
		for (int i = 0; i < n; i++) {
			ara2[i] = hmax - ara[i];
		}
		if (k % 2 == 1)
		{
			for (int i = 0; i < n; i++) {
				cout << ara[i] << " ";
			}
			cout << endl;
		}
		else
		{
			for (int i = 0; i < n; i++) {
				cout << ara2[i] << " ";
			}
			cout << endl;
		}


	}
	else if (!zero)
	{
		ll  hmax = -10000000000;
		for (int i = 0; i < n; i++) {
			ara[i] = high - ara[i];
			hmax = max(hmax, ara[i]);
		}
		ll ara2[n];
		for (int i = 0; i < n; i++) {
			ara2[i] = hmax - ara[i];
		}
		if (k % 2 == 1)
		{
			for (int i = 0; i < n; i++) {
				cout << ara[i] << " ";
			}
			cout << endl;
		}
		else
		{
			for (int i = 0; i < n; i++) {
				cout << ara2[i] << " ";
			}
			cout << endl;
		}

	}
	else
	{
		ll ara2[n];
		//cout << "HI" << endl;
		for (int i = 0; i < n; i++) {
			ara2[i] = high - ara[i];
		}
		if (k % 2 == 1)
		{
			for (int i = 0; i < n; i++) {
				cout << ara2[i] << " ";
			}
			cout << endl;
		}
		else
		{
			for (int i = 0; i < n; i++) {
				cout << ara[i] << " ";
			}
			cout << endl;
		}

	}
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}