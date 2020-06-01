#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ara[n];
		for(int i=0;i<n;i++)
			cin>>ara[i];
		//int xxx[n];
		int i=0;
		int left=0,right=0;
		while(i<n)
		{
			if(i<=ara[i])
			{
				left++;
			}
			else
			{
				break;
			}
			i++;
 
		}
		i=n-1;
		int j=0;
		while(i>=0)
		{
			if(j<=ara[i])
			{
				right++;
			}
			else
			{
				break;
			}
			j++;
			i--;
 
		}
		//cout<<left<<right<<endl;
		if(left+right<n)
			cout<<"No"<<endl;
		else
		{	
			if(left+right>n)
			{
				cout<<"Yes"<<endl;
			}
			else if(left==right)
			{
				if(max(ara[left-1],ara[left])>=left)
				{
					cout<<"Yes"<<endl;
				}
				else
					cout<<"No"<<endl;
			}
		}
		
 
	}
	return 0;
 
}