#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int rem=n%4;
	if(rem==0)
		cout<<1<<" A"<<endl;
	else if(rem==1)
		cout<<0<<" A"<<endl;
	else if(rem==2)
		cout<<1<<" B"<<endl;
	else if(rem==3)
		cout<<2<<" A"<<endl;

	return 0;
}