#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	long long maxx=0,sum=0,t;

	for(int i=0;i<n;i++){
		cin>>t;
		sum+=t;
		maxx=max(t,maxx);
	}
	if(sum%2==0)
	{
		if(sum-maxx<maxx)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}