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
		int n,r;
		cin>>n>>r;
		int ara[n];
		map<int,int>mm;
		for(int i=0;i<n;i++){
			cin>>ara[i];
			mm[ara[i]]++;
		}
		sort(ara,ara+n);
		int ans=0;
		long long sub=0;
		int i=n-1;
		while(i>=0)
		{
			int temp=ara[i];
			int num=mm[temp];
			int now=temp-sub;
			if(now<=0)
				break;
			i-=num;
			sub+=r;
			ans++;

		}
		cout<<ans<<endl;
	}

}