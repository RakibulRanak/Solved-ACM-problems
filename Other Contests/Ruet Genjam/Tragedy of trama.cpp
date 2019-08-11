#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int i=1;
	float x1,y1,r1,x2,y2,r2,dis;
	while(i<=n)
	{
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

		if(dis<=r1+r2)
			cout<<"NOT POSSIBLE"<<endl;
		else
		{
			int ux=(r1*x2)+(r2*x1);
			int nx=r1+r2;
			int uy=(r1*y2)+(r2*y1);
			int ny=r1+r2;
			int gcdx=__gcd(ux,nx);
			int gcdy=__gcd(uy,ny);
			int aux=ux/gcdx;
			int anx=nx/gcdx;
			int auy=uy/gcdy;
			int any=ny/gcdy;
			if(ux==0)
				cout<<0<<" ";
			else
				cout<<aux<<"/"<<anx<<" ";
			if(uy==0)
				cout<<0<<endl;
			else
				cout<<auy<<"/"<<any<<endl;
		}
		
		i++;
	}
	return 0;
}