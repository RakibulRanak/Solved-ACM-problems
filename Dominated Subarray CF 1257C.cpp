#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin>>n;
		map<int,int>m;
		int minn=INT_MAX;
		for(int i=1;i<=n;i++)
		{
			int t;
			cin>>t;
			int before=m[t];
			m[t]=i;
			int after=m[t];
			if(before!=0)
			{
				minn=min(minn,after-before+1);
			}
		
		}
		if(minn==INT_MAX)
			cout<<-1<<endl;
		else
			cout<<minn<<endl;
	}

	return 0;
 
}