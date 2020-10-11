#include <bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



int main() {
	FastIO; int t; cin >> t;

	for (int i = 0; i < t; i++)
	{
		int b, c, d;
		cin >> d >> b >> c;
		d = max({d, b, c});
		cout << d + 1 << endl;
	}
	return 0;
}