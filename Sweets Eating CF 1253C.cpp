#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin >> n>>m;
	long long ara[n],temp=0;
	for(int i=0;i<n;i++){
		cin>>ara[i];

	}
	sort(ara,ara+n);
	for(int i=0;i<n;i++)
	{
		temp+=ara[i]	;
		ara[i]=temp;
	}
	for(int i=0;i<n;i++)
	{
		if(i>=m)
		{
			cout<<ara[i-m]+ara[i]<<" ";
			ara[i]+=ara[i-m];
		}
		else
			cout<<ara[i]<<" ";
	}

	return 0;
}	