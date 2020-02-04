#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	string ara1[n],ara2[k];
	for(int i=0;i<n;i++)
		cin>>ara1[i];
	for(int i=0;i<k;i++)
		cin>>ara2[i];
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int temp;
		cin>>temp;
		temp--;
		cout<<ara1[temp%n]<<ara2[temp%k]<<endl;
	}


	
}