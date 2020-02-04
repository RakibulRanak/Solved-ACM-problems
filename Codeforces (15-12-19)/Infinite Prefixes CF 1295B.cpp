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
		int n,x;
		cin>>n>>x;
		string s;
		cin>>s;
		vector<int>vec,mac;
		int zero=0;
		int one=0;
		map<int,int>m;
		int high=0,low=1000000000;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
				zero++;
			else
				one++;

			vec.push_back(zero-one);
			if(m[vec[i]]==0)
				mac.push_back(vec[i]);

			m[vec[i]]++;
			high=max(high,vec[i]);
			low=min(low,vec[i]);
		}
	
		int inc = zero-one;
	
		if(inc==0){
			if(x<=high && x>=low)
			{
				cout<<-1<<endl;
			}
			else
			{
				cout<<0<<endl;
			}
		}
	
		else
		{
			int ans=0;
			if(x==0)
				ans=1;
			for(int i=0;i<mac.size();i++)
			{	

				if(mac[i]<x && inc <0 )
				{
					continue;
				}
				if(mac[i]>x && inc >0)
				{
					continue;
				}
				if((x-mac[i])%inc==0)
				{
					ans+= m[mac[i]];
				}
			}
			cout<<ans<<endl;
		}

	}
	
	return 0;

}