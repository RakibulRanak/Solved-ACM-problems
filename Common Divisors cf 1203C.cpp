#include <bits/stdc++.h>
using namespace std;
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	long long  low,temp,ans=0;
	cin>>temp;
	low=temp;
	for(int i=1;i<n;i++)
	{
		cin>>temp;
		low=__gcd(low,temp);
	}
	//cout<<low<<endl;
	for (int i=1; i<=sqrt(low); i++) 
    { 
        if (low%i == 0) 
        { 	
        	//cout<<low/i<<" "<<i<<endl;
            if (low/i == i) 
                ans+=1; 
  
            else 
                ans+=2;
        } 
    } 
    cout<<ans<<endl;

	
	return 0;
}