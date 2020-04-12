#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		long long a,b,c;
		cin>>a>>b>>c;
		bool valid=true;

		if(a+b<=c || a+c<=b || b+c<=a || a<=0 ||b<=0 ||c<=0)
			valid=false;
		if(!valid)
			cout<<"Case "<<i<<": "<<"Invalid"<<endl;
		else if(a==b && b==c)
			cout<<"Case "<<i<<": "<<"Equilateral"<<endl;
		else if(a==b ||a==c||b==c)
			cout<<"Case "<<i<<": "<<"Isosceles"<<endl;
		else
			cout<<"Case "<<i<<": "<<"Scalene"<<endl;
	}
	return 0;
}
