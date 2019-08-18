#include <bits/stdc++.h>
using namespace std;
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,temp;
	cin>>n;
	long long ansminus=0,ansplus=0,zero=0,ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp<0){
			ans+=(-1-temp);
			ansminus++;
		}
		else if(temp>0)
		{
			ans+=(temp-1);
			ansplus++;
		}
		else
		{
			zero++;
		}
	}
	if(ansminus%2==1)
	{
		if(zero>0)
		{
			cout<<ans+zero<<endl;
		}
		else
		{
			cout<<ans+2<<endl;
		}
	}
	else
	{
		cout<<ans+zero<<endl;
	}
	return 0;
}