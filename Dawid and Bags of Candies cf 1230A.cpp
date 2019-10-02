#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int ara[4];
	int sum = 0;
	for (int i = 0; i < 4; i++)
		cin >> ara[i];
	sort(ara, ara + 4);
	if (abs(ara[1] + ara[2] - ara[3]) == ara[0])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}