#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	
	cin>>test;
	while(test--)
	{
		string a,b;
		cin>>a>>b;
		map<char,int>m11,m22;
		for(int i=0;i<a.size();i++)
		{
			m11[a[i]]++;
			m22[b[i]]++;
		}
		bool aaa=false;
		for(char x='a';x<='z';x++)
		{
			if(m11[x]*m22[x]!=0)
			{
				aaa=true;
				break;
 
			}
 
		}
		if(aaa)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
