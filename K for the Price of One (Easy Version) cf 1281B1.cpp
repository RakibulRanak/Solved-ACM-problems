#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long t;
	cin >> t;

	while (t--)
	{
		long long n, high, k;
		cin >> n >> high >> k;

		long long ara[n];
		long long ans = 0;

		for (long long i = 0; i < n; i++)
			cin >> ara[i];

		sort(ara, ara + n);

		long long i = 0;
		long long temp = ara[0];
		map<long, long>m;

		while (ara[i] + m[i - 2] <= high && i < n)
		{

			//temp = m[i - 2] + ara[i];
			m[i] = m[i - 2] + ara[i];
			i++;

		}



		cout << i << endl;
	}

}