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
		int a,b,c,r;
		cin>>a>>b>>c>>r;
		int left=c-r;
		int right=c+r;
		int ans=0;
		if(a>b)
			swap(a,b);
		if(a<=left && b<=left)
			ans=b-a;
		else if(a>=right && b>=right)
			ans=b-a;

		else {
			ans=min(b-a ,left-a);
			if(ans<0)
				ans=0;

			int tt;
			tt=min(b-a ,b-right);
			if(tt<0)
				tt=0;
			ans+=tt;

		}
		cout<<ans<<endl;
		


	}
	
}