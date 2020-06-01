#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	long long n, m,g1,g2;
	cin >> n >> m >> t;
	long long gcd=__gcd(n,m);
	g1=n/gcd;
	g2=m/gcd;
	while(t--){
		long long ax,ay,bx,by;
		cin>>ax>>ay>>bx>>by;
		ay--;
		by--;
		(ax==1)?ay/=g1 : ay/=g2;
		(bx==1)?by/=g1 :by/=g2;
		if(ay==by)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;


	}


	return 0;
}