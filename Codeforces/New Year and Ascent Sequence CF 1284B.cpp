#include <bits/stdc++.h>
using namespace std;

vector<int>ll,hh;
int size;
int countGreater(int k) 
{ 
    int l = 0; 
    int r = size - 1; 
 
    int leftGreater = size; 
  
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        if (hh[m] > k) { 
            leftGreater = m; 
            r = m - 1; 
        } 
        else
            l = m + 1; 
    } 
  
    return (size - leftGreater); 
} 
  
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	long long mul=t;
	
	long long ans=0;
	int n;
	while(t--)
	{
	
		cin>>n;
		int low;
		cin>>low;

		int minn,maxx;
		minn=low;
		maxx=low;
		bool one=true;


		for(int i=1;i<n;i++)
		{
			int temp;
			cin>>temp;
			if(temp>low && one)
			{
				ans++;
				one=false;

			}
			low=min(low,temp);
			minn=min(minn,temp);
			maxx=max(maxx,temp);

		}
		if(one)
		{
			ll.push_back(minn);
			hh.push_back(maxx);
		}
	}
	sort( ll.begin(),ll.end());

	sort(hh.begin(),hh.end());

	// for(int i=0;i<ll.size();i++)
	// {
	// 	cout<<ll[i]<<" ";
	// }
	// cout<<endl;
	// for(int i=0;i<ll.size();i++)
	// {
	// 	cout<<hh[i]<<" ";
	// }
	// cout<<endl;
	// cout<<ans<<endl;

	long long sum=0;
	size=hh.size();
	for(int i=0;i<ll.size();i++)
	{
		int tt=ll[i];
		//cout<<sum<<endl;
		sum+=countGreater(tt); 
	}
	//cout<<t<<endl;
	ans=(mul*ans)+((mul-ans)*ans);
	ans+=sum;
	cout<<ans<<endl;

	
}