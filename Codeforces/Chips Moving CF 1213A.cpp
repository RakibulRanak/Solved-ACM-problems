#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int ara[n];
	for(int i=0;i<n;i++)
		cin>>ara[i];
	long long ans=1000000000000000,temp=0;
	for(int i=0;i<n;i++)
	{	
		temp=ara[i];
		long long tans=0;
		for(int j=0;j<n;j++)
		{
			if(ara[j]==temp)
				continue;
			else if(temp>ara[j])
			{
				if((temp-ara[j])%2==1)
					tans+=1;
			}
			else
			{
				if((ara[j]-temp)%2==1)
					tans+=1;
			}
		}
		if(tans<ans)
			ans=tans;
	}
	cout<<ans<<endl;
	return 0;
}