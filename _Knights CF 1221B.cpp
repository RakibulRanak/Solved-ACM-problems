#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	char ara[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			ara[i][j] = 'N';
	}

	
	int i = 0, j = 0;

	queue< pair<int, int> >q;

	q.push({0, 0});

	while (!q.empty())
	{
		pair<int, int> myp =  q.front();
		i = myp.first;
		j = myp.second;
		//cout<<i<<" "<<j<<endl;
		q.pop();
		char now = ara[i][j];
		int arai[] = { -2, -2, -1, -1, 1, 1, 2, 2};
		int araj[] = { -1, 1, -2, 2, -2, 2, -1, 1};
		for (int p = 0; p < 8; p++)
		{
			if (i + arai[p] < 0 || i + arai[p] >= n || j + araj[p] < 0 || j + araj[p] >= n)
				continue;

			if (ara[i + arai[p]][j + araj[p]] == 'N')
			{
				q.push({i + arai[p], j + araj[p]});

					if (now == 'B')
					{
						ara[i + arai[p]][j + araj[p]] = 'W';
					}
					else
					{
						ara[i + arai[p]][j + araj[p]] = 'B';
					}
			}
		}

	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ara[i][j]=='N')
				ara[i][j]='B';
		}
	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ara[i][j];
		}
		cout<<endl;
	
	}



	return 0;
}