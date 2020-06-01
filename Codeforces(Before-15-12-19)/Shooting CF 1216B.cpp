#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<pair<int,int>>vec;
	int t;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		vec.push_back({t,i+1});
	}
	sort(vec.begin(),vec.end(),greater<pair<int,int> >());
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		int temp=(vec[i].first*i)+1;
		ans+=temp;
	}
	cout<<ans<<endl;
	for(int i=0;i<n;i++)
		cout<<vec[i].second<<" ";
	cout<<endl;
	return 0;
}