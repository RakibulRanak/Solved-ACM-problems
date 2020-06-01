#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int ans = 0;
	if (e > f)
	{
		int temp = min(a, d);
		ans += temp * e;
		d -= temp;
		temp = min(b, min(c, d));
		ans += temp * f;
	}
	else
	{


		int temp = min(b, min(c, d));
		ans += temp * f;
		d -= temp;
		temp = min(a, d);
		ans += temp * e;

	}
	cout << ans << endl;
}