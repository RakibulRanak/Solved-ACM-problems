#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int ara[n];
    	for (int i = 0; i < n; ++i)
    		cin>>ara[i];

    	int hans=0,lans=20;
    	for(int i=0;i<n;i++)
    	{	
    		int high=1;
    		for(int j=i;j<n-1;j++)
    		{
    			if(ara[j]+2>=ara[j+1])
    				high++;
    			else
    				break;
    		}
    		for(int j=i-1;j>=0;j--)
    		{
    			if(ara[j]+2>=ara[j+1])
    				high++;
    			else
    				break;
    		}
    		//cout<<high<<endl;

    		hans=max(high,hans);
    		lans=min(high,lans);
    	}
    	cout<<lans<<" "<<hans<<endl;
    }
}