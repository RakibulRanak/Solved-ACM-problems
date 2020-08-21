#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++)
	{
		int r, g, b, w;
		cin >> r >> g >> b >> w;
		int even = 0;
		int odd = 0;
		odd = r % 2 + g % 2 + b % 2 + w % 2;
		int low = min(min(r, g), b);
		even = 4 - odd;
		if (even >= 3)
			cout << "YES" << endl;
		else if (even <= 1 && low >= 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}