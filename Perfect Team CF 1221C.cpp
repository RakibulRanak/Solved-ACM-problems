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
		int c,m,x;
		cin>>c>>m>>x;
		if(c==0||m==0)
			cout<<0<<endl;
		else
		{
			int temp=min(c,m);

			int sum=c+m+x;
			sum/=3;
			cout<<min(sum,temp)<<endl;

		}
	}


	return 0;
}