#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int ara[n];
	for(int i=0;i<n;i++)
		cin>>ara[i];
	sort(ara,ara+n);

	vector<int>vec;
	for(int i=(n/2)+1;i<n;i++)
		vec.push_back(ara[i]-ara[i-1]);

	vec.push_back(100);
	int pivot=ara[n/2];
	long long ans=pivot;

	for(long long i=0;i<vec.size()-1;i++)
	{

		long long num=vec[i];
		int hudai=vec[i+1];
		//cout<<num<<" "<<hudai<<endl;
		if(num==0||(num==0 && hudai==0))
			continue;

		long long dorkar=num*(i+1);
		if(k>=dorkar)
		{
			ans+=(dorkar/(i+1));
			k-=dorkar;
			
		}
		else if(k<dorkar)
		{
			ans+=k/(i+1);
			k=0;
			break;

		}
	

	}
	ans+=(k/(vec.size()));
	
	cout<<ans<<endl;
	return 0;
}