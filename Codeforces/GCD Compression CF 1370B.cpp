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
	int n;
	cin >> n;
	int even = 0, odd = 0;
	vector<int>jur, bijur;
	for (int i = 1; i <= 2 * n; i++)
	{
		int x;
		cin >> x;
		if (x % 2 == 1)
		{
			odd++;
			bijur.push_back(i);
		}
		else
		{
			even++;
			jur.push_back(i);
		}
	}
	if (even % 2 == 0)
	{
		if (even > odd)
		{
			for (int i = 0; i < even - 2; i += 2)
			{
				cout << jur[i] << " " << jur[i + 1] << endl;
			}
			for (int i = 0; i < odd; i += 2)
			{
				cout << bijur[i] << " " << bijur[i + 1] << endl;
			}
		}
		else
		{
			for (int i = 0; i < even; i += 2)
			{
				cout << jur[i] << " " << jur[i + 1] << endl;
			}
			for (int i = 0; i < odd - 2; i += 2)
			{
				cout << bijur[i] << " " << bijur[i + 1] << endl;
			}
		}
	}
	else
	{
		for (int i = 0; i < even - 1; i += 2)
		{
			cout << jur[i] << " " << jur[i + 1] << endl;
		}
		for (int i = 0; i < odd - 1; i += 2)
		{
			cout << bijur[i] << " " << bijur[i + 1] << endl;
		}
	}
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}