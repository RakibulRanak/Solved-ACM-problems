#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int goal[n],foul[n];
		for(int i=0;i<n;i++){
			cin>>goal[i];
			goal[i]*=20;
		}
		for(int i=0;i<n;i++){
			cin>>foul[i];
			foul[i]*=10;
		}
		int max=0;
		for(int i=0;i<n;i++)
		{
			if(goal[i]-foul[i]>max)
				max=goal[i]-foul[i];
		}
		cout<<max<<endl;

	}
	return 0;
	
}