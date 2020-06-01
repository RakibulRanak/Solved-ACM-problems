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
		int x,y;
		cin>>x>>y;
		if(x==2 ||x==3)
		{
			if(y>3)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
		else if(x==1)
		{
			if(y>1)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
		else
			cout<<"YES"<<endl;
	}

	return 0;
 
}