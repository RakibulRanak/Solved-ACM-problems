#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int ara[n];
	map<int,int>m,mm;
	int del=0;
	for(int i=0;i<n;i++)
	{
		cin>>ara[i];
		m[ara[i]]++;
		if(m[ara[i]]>1)
			del++;
	}
	int ans=20000;


	for(int i=0;i<=n-del;i++)
	{
		int count=0;
		mm=m;
		int j=i;

		while(count<del && j<n)
		{
			if(mm[ara[j]]<=1)
			{	
				j++;
				continue;
			}
			else
			{
				mm[ara[j]]--;
				count++;
			}
			j++;
		}
		//cout<<i<<" "<<j<<endl;
		int duration=j-i;
		if(duration<ans && count==del)
		{
			ans=duration;

		}
	}
	cout<<ans<<endl;
	return 0;
}