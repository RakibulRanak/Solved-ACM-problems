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
		int n;
		cin>>n;
		int ara1[n];
		int ara2[n];
		for(int i=0;i<n;i++)
		{
			cin>>ara1[i];
			cin>>ara2[i];
		}
		if(n==1)
		{
			cout<<0<<endl;

		}
		else
		{
			sort(ara1,ara1+n);
			sort(ara2,ara2+n);
			int big=ara1[n-1];
			int small=ara2[0];
			if(big>small)
				cout<<big-small<<endl;
			else
				cout<<0<<endl;
		}
		
	}
	
	return 0;
}