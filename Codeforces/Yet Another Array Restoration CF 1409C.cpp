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
	int n, x, y;
	cin >> n >> x >> y;
	int lastitem = 100000;
	int fitem = 100000;
	int diff = 100000;
	for (int i = 1; i <= x; i++)
	{
		int a, b;
		a = x - i; b = y - i;
		for (int j = 1; j <= b - a ; j++) {
			if (a % j == 0 && b % j == 0) {
				int templast = i + ((n - 1) * j);
				if (templast >= y) {
					//cout << templast << " " << i << " " << j << endl;
					if (lastitem > templast)
					{
						lastitem = templast;
						diff = j;
						fitem = i;

					}

				}
			}
		}
	}
	//cout << fitem << " " << diff << " " << lastitem << endl;
	for (int i = fitem; i <= lastitem; i += diff)
		cout << i << " ";
	cout << endl;
}


int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}