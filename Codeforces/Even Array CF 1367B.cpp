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
	int oddp = 0, evenp = 0;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if (i % 2 == 0 && temp % 2 == 1)
		{
			oddp++;
		}
		else if (i % 2 == 1 && temp % 2 == 0)
		{
			evenp++;
		}
	}
	if (oddp != evenp)
		cout << -1 << endl;
	else
		cout << oddp << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}