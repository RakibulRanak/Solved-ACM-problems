//idea copied for learning
#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<int,int> a,b;
	int n,i,ans=1,x;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		a[x]++;
		b[a[x]]++;
		if(a[x]*b[a[x]]==i&&i!=n)
            ans=i+1;
		else if(a[x]*b[a[x]]==i-1)
            ans=i;

	}
	cout<<ans<<endl;
	return 0;
}
