#include <bits/stdc++.h>
using namespace std;
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	long long n,l,r;
	cin>>n>>l>>r;
	long long low,high=1,temp=1,lows=0,ttt=2;
 
	low=(n-l+1);
	for(int i=1;i<=n-low;i++){
		ttt=pow(2,i);
		lows+=ttt;
	}
	//cout<<lows<<endl;
	low+=lows;
 
	cout<<low<<" ";
 
 
	for(int i=1;i<=r;i++)
		high*=2;
	high--;
	for(int i=1;i<r;i++)
		temp*=2;
 
	high+=temp*(n-r);
 
	cout<<high<<endl;
 
	return 0;
}