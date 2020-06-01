#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	string s;
	cin>>s;
	//string ans="";
	int count=0;
	for(int i=0;i<n;i+=2)
	{
		if(s[i]=='a'&&s[i+1]=='a')
		{
			s[i+1]='b';
			count++;
		}

		else if(s[i]=='b'&&s[i+1]=='b')
		{
			s[i+1]='a';
			count++;
		}

	}
	cout<<count<<endl;
	cout<<s<<endl;
	return 0;
}