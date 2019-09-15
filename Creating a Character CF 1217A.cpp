#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int s, i, e;
		cin >> s >> i >> e;
		long long ans = 0;
		int temp = s - i;
		temp += e;
		ans = (temp + 1) / 2;
		if(s>i+e)
			ans=e+1;
		if(ans<0)
			ans=0;
		cout << ans << endl;
	}
	return 0;
}