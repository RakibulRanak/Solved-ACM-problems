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
		int t;
		cin>>t;
		bool ans=false;
		int l,r;
		for(int i=1;i<n;i++){
			int temp;
			cin>>temp;
			if(abs(t-temp)>=2 && !ans)
			{
				ans=true;
				l=i;
				r=i+1;
			}
			t=temp;
		}
		if(ans)
		{
			cout<<"YES"<<endl;
			cout<<l<<" "<<r<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}

	
}