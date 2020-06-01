#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ara[n];
		bool ans=true;
		for(int i=0;i<n;i++)
			cin>>ara[i];
		if(n<=3)
			ans=true;
		else
		{	
			bool left=false,right=false;
			int a=ara[0];
			int b=ara[1];
			int temp;
			if(b==a+1)
				right=true;
			else if(b==1 && a==n)
				right=true;
			else if(a-1==b)
				left=true;
			else if(a==1 && b==n)
				left=true;
	
			if(left)
			{	
				temp=ara[0];
				for(int i=0;i<n;i++)
				{
					if(ara[i]!=temp)
					{
						ans=false;
						break;
					}
					if(temp==1)
						temp=n;
					else
						temp=temp-1;
				}
			}
			else
			{	
				temp=ara[0];
				for(int i=0;i<n;i++)
				{
					if(ara[i]!=temp)
					{
						ans=false;
						break;
					}
					if(temp==n)
						temp=1;
					else
						temp=temp+1;
				}
			}

		}
		if(ans)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}