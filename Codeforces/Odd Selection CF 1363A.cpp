#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll cs) {
	int x, n;
	cin >> n >> x;
	int even = 0, odd = 0;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if (temp % 2 == 1)
			odd++;
		else
			even++;
	}

	int low = min(even, x - 1);

	int baki = x - low;
	if (baki % 2 == 1)
	{
		if (baki <= odd)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	else
	{
		if (baki + 1 <= odd  && baki < x)
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}