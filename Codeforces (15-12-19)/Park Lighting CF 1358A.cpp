#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		if (b > a)
			swap(a, b);

		int r = a / 2;
		int ans = 0;
		ans += b * r;
		if (a % 2 == 1)
			ans += (b + 1) / 2;
		cout << ans  << endl;
	}
}