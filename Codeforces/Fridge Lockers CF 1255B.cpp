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
		int n,m,tt;
		cin>>n>>m;
		vector<pair<int,int>>vec;
		long long sum=0;
		for(int i=1;i<=n;i++){
			cin>>tt;
			vec.push_back({tt,i});
			sum+=tt;
		}
		sum=sum*2;
		sort(vec.begin(),vec.end());

		if(m<n ||n==2)
			cout<<-1<<endl;
		else
		{
			
			int first=vec[0].first;
		
			int baki=m-n;
			sum+= baki*vec[0].first;
			sum+=baki*vec[1].first;
			cout<<sum<<endl;
			for(int i=0;i<n-1;i++)
			{
				cout<<vec[i].second<<" "<<vec[i+1].second<<endl;
			}
			cout<<vec[n-1].second<<" "<<vec[0].second<<endl;
		
			for(int i=0;i<baki;i++)
			{
				cout<<vec[0].second<<" "<<vec[1].second<<endl;
			}
		}

	}
	return 0;
}