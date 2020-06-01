#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,x,y;
	cin>>n>>x>>y;
	int ara[8]={1,0,0,1,-1,0,0,-1};
	map<int,int>m;

	for(int i=0;i<n;i++)
	{
		int x1,y1;
		cin>>x1>>y1;
		//cout<<x1<<" "<<y1<<endl;

		for(int j=0;j<8;j+=2)
		{
			int x2=x+ara[j];
			int y2=y+ara[j+1];
			//cout<<x2<<" | "<<y2<<endl;
			if(x2<0 ||y2<0)
				continue;

			if( j==0 && x1>=x2)
			{
				m[j/2]++;
				//cout<<0<<endl;
			}
			if(j==2 &&y1>=y2)
			{
				m[j/2]++;
				//cout<<1<<endl;
			}
			if(j==4&&x1<=x2)
			{
				m[j/2]++;
				//cout<<2<<endl;
			}
			if(j==6&&y1<=y2)
			{
				m[j/2]++;
				//cout<<3<<endl;
			}

		}
	}
	int hh=0;
	int ind;
	for(int i=0;i<=3;i++)
	{
 		if(m[i]>hh)
 		{
 			hh=m[i];
 			ind=i;
 		}

	}
	cout<<hh<<endl;
	cout<<x+ara[ind*2]<<" "<<y+ara[ind*2+1]<<endl;
}