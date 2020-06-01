#include <bits/stdc++.h>
using namespace std;
 
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin>>s;
	int len=s.size();
	int one=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='1')
			one++;
	}
	if(one==0)
		cout<<0<<endl;
	else if(one==1)
	{
		int flag;
		int i=0;
		while(s[i]!='1')
		{
			i++;
		}
		flag=i;
		//cout<<len<<" "<<flag<<endl;
		int ans=0;
		for(i=len-1;i>flag;i-=2)
		{
			ans+=1;
		}
		cout<<ans<<endl;
	}
	else 
	{
		int flag;
		int i=0;
		while(s[i]!='1')
		{
			i++;
		}
		flag=i;
		int ans=0;
		for(i=len-1;i>=flag;i-=2)
		{
			ans+=1;
		}
		cout<<ans<<endl;
	}
	return 0;
}