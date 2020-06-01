#include<bits/stdc++.h>
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
		int ara[n];
	
		map<int,int>pos;
		for(int i=0;i<n;i++)
		{
			cin>>ara[i];
			pos[ara[i]]=i+1;
		}
		cout<<1;
		int mn=pos[1],mx=pos[1];
		for(int i=2;i<=n;i++)
		{
			mn=min(mn,pos[i]);
			mx=max(mx,pos[i]);
			// cout<<"pos i : "<<pos[i]<<endl;
			// cout<<mn<<" "<<mx<<endl;
			if(mx-mn+1==i)
				cout<<1;
			else
				cout<<0;
		}
	cout<<endl;
	}

	return 0;
}