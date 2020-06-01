#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, temp;
	cin >> n;
	map<int, int>m1;
	map<int, int>m2;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		m1[temp] = 1;
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		m2[temp] = 1;
	}
	for (int i = 1; i <= 200; i++)
	{
		if (m1[i] == 0)
			continue;
		for (int j = 1; j <= 200; j++)
		{
			if (m2[j] == 0)
				continue;
			if(m1[i+j]==0 &&m2[i+j]==0)
			{
				cout<<i<<" "<<j<<endl;
				return 0;
			}
		}
	}


	return 0;
}