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
		int n;
		cin>>n;
		string ans="";
		int temp=n/2;
		if(n  <2){
			cout<<0<<endl;
		}
		else{
			
			for(int i=0;i<temp;i++)
			{
				ans+='1';
			}
			if (n%2==0)
			{
				cout<<ans<<endl;
			}
			else
			{
				ans[0]='7';
				cout<<ans<<endl;
			}

		}
		
	}
	
	return 0;

}