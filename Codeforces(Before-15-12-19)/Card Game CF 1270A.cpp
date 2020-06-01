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
		int n,k1,k2;
		cin>>n>>k1>>k2;
		int t1=0,t2=0;
		for(int i=0;i<k1;i++)
		{
			int temp;
			cin>>temp;
			t1=max(t1,temp);
		}
		for(int i=0;i<k2;i++)
		{
			int temp;
			cin>>temp;
			t2=max(t2,temp);
		}
		if(t1>t2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	
}