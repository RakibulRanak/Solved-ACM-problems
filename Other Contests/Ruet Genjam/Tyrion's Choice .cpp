#include <bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int X,Y,Z;
	cin>>X>>Y>>Z;
	int A[X],B[Y],C[Z];
	

	for(int i=0;i<X;i++)
		cin>>A[i];

	for(int i=0;i<Y;i++){
		cin>>B[i];
		
	}

	for(int i=0;i<Z;i++){
		cin>>C[i];
	
	}

	sort(A,A+X);
	sort(B,B+Y);
	sort(C, C+Z, greater<int>()); 
	
	int x=0,y=Z-1,ans=0;
	for(int i=0;i<X;i++)
	{
		int temp=A[i];
		//cout<<temp<<endl;
		int first,last;
		while(B[x]<temp && x<Y)
		{
			x++;
			//cout<<"hi "<<endl;
		}
		first=x;
		//cout<<"ghfghf "<<C[y]<<endl;
		while(C[y]<=temp &&y>=0)
		{
			y--;
			//cout<<"hello"<<endl;
		}

		last=y+1;
		//cout<<first<<" "<<last<<endl;
		if(first+last>ans)
			ans=first+last;
	}

	

	cout<<ans+1<<endl;



	return 0;
}