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
		long long sum=0,xx=0;
		for(int i=0;i<n;i++)
		{
			long long temp;
			cin>>temp;
			sum+=temp;
			xx=xx^temp;
			//cout<<xx<<endl;
		}
		if(sum==2*xx)
		{
			cout<<0<<endl;
			cout<<endl;
		}
		else
		{
			cout<<2<<endl;
			long long ttt=sum+xx;
			cout<<xx<<" "<<ttt<<endl;
		}
	}

	
}