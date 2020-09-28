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
	int one = 0, zero = 0, temp;
	for (int i = 1; i <= n; i++)
	{
		cin >> temp;
		if (temp == 1)
			one++;
		else
			zero++;
	}
	vector<int>vec;
	if (one <= zero)
	{
		cout << n / 2 << endl;
		for (int i = 0; i < n / 2; i++)
			cout << 0 << " ";

	}
	else
	{
		int num = one - one % 2;
		cout << num << endl;
		for (int i = 0; i < num; i++)
			cout << 1 << " ";
	}

	cout << endl;

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}