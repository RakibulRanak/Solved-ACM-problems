#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	char table[n][k];
	for(int i=0;i<n;i++)
	{
		string a;
		cin>>a;
		for(int j=0;j<k;j++)
		{
			table[i][j]=(char)a[j];
		}
	}
	int ara[k];
	for(int i=0;i<k;i++)
		cin>>ara[i];
	int ans=0;
	for(int i=0;i<k;i++)
	{
		map<char,int>m;
		for(int j=0;j<n;j++)
		{
			m[table[j][i]]++;
		}
		int t=0;
		for(char a='A';a<='E';a++)
		{
			if(m[a]>t)
				t=m[a];
		}
		ans+=(t*ara[i]);
	}
	cout<<ans<<endl;
	return 0;
}