#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N, M, gcd, sum = 0;
	cin >> N >> M;
	gcd = __gcd(N, M);
	//cout<<gcd<<endl;
	for (int i = 1; i <= sqrt(gcd); i++)
	{
		if (gcd % i == 0)
		{

			if (gcd / i == i)
				sum += i;


			else
				sum += (i + (gcd / i));
		}

	}
	cout << sum << endl;

	return 0;
}