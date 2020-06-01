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
	int b=0,w=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='B')
			b++;
		else
			w++;
	}
	if(b%2==1 && w%2==1)
	{
		cout<<-1<<endl;
		return 0;
	}
	char x,y; //x change hoye y hbe
	if(b%2==0){
		x='B';
		y='W';
	}
	else{
		x='W';
		y='B';
	}
	int ans=0;
	vector<int>vec;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]==x)
		{
			s[i]=y;
			ans++;
			vec.push_back(i+1);
			if(s[i+1]==x)
				s[i+1]=y;
			else
				s[i+1]=x;
		}

	}
	cout<<ans<<endl;
	for(int i=0;i<ans;i++)
		cout<<vec[i]<<" ";
	cout<<endl;
	return 0;

}