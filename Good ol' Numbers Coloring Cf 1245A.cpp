#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	while (n--) {
		int x, y;
		cin >> x >> y;
		if (__gcd(x, y) == 1)
			cout << "Finite" << endl;
		else
			cout << "Infinite" << endl;
	}
	return 0;

}