#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	long long min=0,temp,ans;
	
	for(int i=0;i<n;i++)
	{	
		long long rowmin=10000000000000;
		for(int j=0;j<m;j++)
		{
			cin>>temp;
			if(temp<rowmin)
			{
				rowmin=temp;
			}
		}
		if(rowmin>min)
		{
			min=rowmin;
		}
	}
	cout<<min<<endl;
}