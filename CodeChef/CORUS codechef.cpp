#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,q;
    	cin>>n>>q;
    	string s;
    	cin>>s;
    	map<char,int>m;
    	map<int,int>length;
    	map<int,int>ans;

    	int high=0;

    	for (int i = 0; i < n; ++i){
    		m[s[i]]++;
    		length[m[s[i]]]++;
    		high=max(high,m[s[i]]);
    	
    	}
    	int sum=0;
    	for(int i=1;i<=high;i++)
    	{
    		ans[i]=length[i]+sum;
    		sum=ans[i];
    	}
    	while(q--)
    	{
    		int c;
    		cin>>c;
    		if(c>=high)
    			cout<<0<<endl;
    		else
    			cout<<n-ans[c]<<endl;
    	}
    }
}