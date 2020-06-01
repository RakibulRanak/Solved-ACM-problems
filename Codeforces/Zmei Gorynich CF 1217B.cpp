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
		long long n,x;
		cin>>n>>x;
		vector<int>vec;
 
		int ara[n];
		for(int i=0;i<n;i++)
		{
			int t1,t2;
			cin>>t1>>t2;
			int t3=t1-t2;
			vec.push_back(t3);
			
			ara[i]=t1;
 
		}
		sort(vec.begin(),vec.end(),std::greater<int>());
		sort(ara,ara+n ,greater<int>());
	
		//int j=0,i=0,
		int count=1;
		bool ghura=true,ans=false;
		//cout<<ara[0]<<" ";
		//cout<<vec[0]<<endl;
		if(ara[0]>=x)
			ans=true;
		else if(x-ara[0]>0 && vec[0]<=0)
			ghura=false;
		else
		{	

			int ttt=((x-ara[0]+(vec[0]-1))/vec[0]);
			//cout<<"ttt "<<(int)ttt<<endl;
			count=ttt+1;
			ans=true;
		}
		if(ans)
			cout<<count<<endl;
		else
			cout<<-1<<endl;
 
	}
	return 0;
}