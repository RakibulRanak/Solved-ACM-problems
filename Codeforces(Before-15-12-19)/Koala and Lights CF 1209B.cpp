#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int col=3005;
	int ara[n + 1][col+1];
	string s;
	cin >> s;
	int start, period;
	for (int i = 1; i <= n; i++)
	{
		cin >> period >> start;
		if (s[i - 1] == '0')
		{

			int j = 0;
			while(j<start &&j<=col)
			{
				ara[i][j]=0;
				j++;
			}

			while(j<=col)
			{	
				int count=0;
				while(count<period && j<=col)
				{
					ara[i][j]=1;
					count++;
					j++;
				}
				count =0;
				while(count<period && j<=col)
				{
					ara[i][j]=0;
					count++;
					j++;
				}
			}

		}
		else
		{	

			int j = 0;
			while(j<start &&j<=col)
			{
				ara[i][j]=1;
				j++;
			}

			while(j<=col)
			{	
				int count=0;
				while(count<period && j<=col)
				{
					ara[i][j]=0;
					count++;
					j++;
				}
				 count =0;
				while(count<period && j<=col)
				{
					ara[i][j]=1;
					count++;
					j++;
				}
			}

		}
	}
/*	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=15;j++)
		{
			cout<<ara[i][j]<<" ";
		}
		cout<<endl;
	}*/
	int m=0;
	for(int j=0;j<=col;j++)
	{
		int temp=0;
		for(int i=1;i<=n;i++)
		{
			if(ara[i][j]==1)
				temp++;
		}
		if(temp>m)
			m=temp;
	}
	cout<<m<<endl;
	return 0;
}