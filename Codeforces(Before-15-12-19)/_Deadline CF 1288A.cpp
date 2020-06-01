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
		int n,d;
		cin>>n>>d;
		if(d<=n)
			cout<<"YES"<<endl;
		else
		{
			bool ans=false;
			int i=1;
			int temp=0,check1=0,check2=0;
			while(1)
			{
				int anss=i+((d+i)/(i+1));
				check2=(d+i)/(i+1);

				if(anss<=n)
				{
					ans=true;
					break;
				}
				if(abs(check2-check1)<1)
				{
					break;
				}
				//cout<<anss<<" "<<check2<<endl;
				check1=check2;
				i++;
			}
			if(ans)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;

}