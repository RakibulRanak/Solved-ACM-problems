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
		int n,x,a,b;
		cin>>n>>x>>a>>b;
		if(a>b)
			swap(a,b);
		int t;
		if(x<a)
		{
			a=a-x;
			cout<<b-a<<endl;
		}
		else
		{	
			x=x-(a-1);
			a=1;
			int t=n-b;
			if(t<=x)
			{
				b+=t;
			}
			else
			{
				b+=x;
			}
			cout<<b-a<<endl;
		}
	}

	return 0;
 
}