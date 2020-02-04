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
		int odd=0,ev=0;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			if(temp%2==1)
				odd++;
			else
				ev++;
		}
		if(ev==0 && odd%2==1)
		{
			cout<<"YES"<<endl;
		}
		else if(ev==0 && odd%2==0)
		{
			cout<<"NO"<<endl;
		}
		else if(odd==0)
		{
			cout<<"NO"<<endl;
		}
		else 
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;

}