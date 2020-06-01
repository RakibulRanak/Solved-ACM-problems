#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	string s;
	cin>>s;
	int n=0,z=0;
	for(int i=0;i<t;i++)
	{
		if(s[i]=='n')
			n++;
		else if(s[i]=='z')
			z++;

	}
	for(int i=0;i<n;i++)
		cout<<1<<" ";

	for(int i=0;i<z;i++)
		cout<<0<<" ";
	cout<<endl;





	return 0;
}