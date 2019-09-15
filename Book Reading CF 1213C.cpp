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
		long long n, m;
		cin >> n >> m;
		if (n == m) {
			cout << n % 10 << endl;
		}
		else if (m > n)
		{
			cout << 0 << endl;
		}
		else
		{

			int des = m % 10;
			int temp = -1, count = 0;
			long long now = m;
			long long tans = 0;
			bool recheck = true;
			while (temp != des)
			{
				if (now+m > n)
				{
					cout << tans+des<< endl;
					recheck = false;
					break;
				}

				now += m;
				temp = now % 10;
				tans += temp;
				//cout<<now<<" "<<tans<<endl;
				count++;
			}
			if (recheck)
			{
				long long khep = m * count;

				long long khepsum = tans;
				long long totalkhep = n / khep;
				long long nowans = totalkhep * khepsum;
				long long baki = n - (totalkhep * khep);
				now = m;
				while (now <= baki)
				{
					nowans += (now % 10);

					now += m;

				}
				cout << nowans << endl;
			}


		}
	}
	return 0;
}