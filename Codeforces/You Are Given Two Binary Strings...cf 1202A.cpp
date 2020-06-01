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
		string s1,s2;
		cin>>s1>>s2;
		reverse(s1.begin(), s1.end()); 
		reverse(s2.begin(), s2.end()); 
		int i=0;
		int ans=0;
		while(s2[i]!='1')
		{
			i++;
		}
		while(s1[i]!='1')
		{
			ans++;
			i++;
		}
		cout<<ans<<endl;
		
	}
	return 0;
}