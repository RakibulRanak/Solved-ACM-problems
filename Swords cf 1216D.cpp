#include <bits/stdc++.h>

using namespace std;

/*long long lcm(long long a, long long b) {
	return (a * b) / __gcd(a, b);
}
*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	long long ara[n];
	long long lag=0;
	long long gcd = 0;
	long long maxx = 0;
	//int zero=0;
	for (int i = 0; i < n; i++) {
		cin >> ara[i];
		//gcd = __gcd(ara[i], gcd);
		maxx = max(maxx, ara[i]);
		
	}

	long long lagbe = 0;
	for (int i = 0; i < n; i++){
		lagbe += maxx - ara[i];
		lag=__gcd(lag,maxx-ara[i]);
	}

	//cout << lag << endl;
	long long people;
	long long num;
	if (lagbe % lag == 0)
	{
		people = lagbe / lag;
		num = lagbe / people;
		cout << people << " " << num << endl;
	}

	return 0;
}