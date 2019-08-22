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
		int b,p,f;
		cin>>b>>p>>f;
		int h,c;
		cin>>h>>c;
		int ans=0,count=0;
		if(h>=c)
		{
			if(b>=2*p){
				count=p;
				b-=(count*2);
			}
			else
			{
				count=b/2;
				b-=(count*2);
			}

			ans+= count*h;

			if(b>=2*f){
				count=f;
				b-=(count*2);
			}
			else
			{
				count=b/2;
				b-=(count*2);
			}
			
			ans+= count*c;

		}
		else
		{	
			if(b>=2*f){
				count=f;
				b-=(count*2);
			}
			else
			{
				count=b/2;
				b-=(count*2);
			}

			ans+= count*c;

			if(b>=2*p){
				count=p;
				b-=(count*2);
			}
			else
			{
				count=b/2;
				b-=(count*2);
			}
			
			ans+= count*h;
		}
		cout<<ans<<endl;
	}
	return 0;
}