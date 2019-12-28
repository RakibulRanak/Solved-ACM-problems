#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int ara[n], ara2[n];
	map<int, int>m, m2;
	for (int i = 0; i < n; i++)
	{
		cin >> ara[i];
		ara2[i] = ara[i];
		m[ara[i]] += 1;
		m2[ara[i]] += 1;
	}
	sort(ara, ara + n);
	sort(ara2, ara2 + n);
	//min
	int low = ara[0];
	map<int,int>atka;
	for (int i = 0; i < n; i++)
	{
		int num = ara[i];
		int target = num - 1;
		if (num == low)
		{
			ara[i] += 1;
			m[ara[i]] += 1;
			m[ara[i] - 1] = 0;
			atka[ara[i]]=1;
		}
		else
		{
			if (m[target] >= 1)
			{
				m[ara[i]] = 0;
				ara[i] = target;
				m[ara[i]] += 1;

			}
			else if(atka[ara[i]]!=1)
			{
				m[ara[i]] = 0;
				ara[i] += 1;
				m[ara[i]] += 1;
				atka[ara[i]]=1;
			}
		}
	}
	//max
	low = ara2[0];
	for (int i = 0; i < n; i++)
	{
		int num = ara2[i];
		int target = num - 1;
		if (i==0 )
		{
			ara2[i] -= 1;
			m2[ara2[i]] += 1;
			m2[ara2[i] + 1] -= 1;
		}
		else
		{
			target = ara2[i] - 1;

			if (m2[target] ==0)
			{
				m2[ara2[i]] -= 1;
				ara2[i] -= 1;
				m2[ara2[i]] += 1;
			}
			else {
				target=ara2[i]+1;
				if (m2[ara2[i]] >= 2)
				{	
					m2[ara2[i]] -= 1;
					ara2[i] += 1;
					m2[ara2[i]] += 1;
				}
			}
		}
	}

	int min = 0, max = 0;
	map<int, int>count1, count2;

	for (int i = 0; i < n; i++) {
		if (count1[ara[i]] == 0)
		{
			count1[ara[i]] = 1;
			min++;
		}
	}
	for (int i = 0; i < n; i++) {
		if (count2[ara2[i]] == 0)
		{
			count2[ara2[i]] = 1;
			max++;
		}
	}
	cout << min << " " << max << endl;

}