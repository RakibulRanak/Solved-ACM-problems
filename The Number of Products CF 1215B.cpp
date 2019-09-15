#include <bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;

	int ara[n+1];

	int dp[n+1];
	int neg=0;
	dp[0]=0;
	int state[n+1];
	state[0]=0;
	int zero=0;
	for(int i=1;i<=n;i++)
	{
		cin>>ara[i];

		if(ara[i]<0)
			neg++;

		if(neg%2==1){
			dp[i]=-1;
			state[i]=state[i-1];
		}
		else{
			dp[i]=0;
			if(dp[i]==0)
			{
				zero++;
				state[i]=zero;
			}
		}


	}
/*	cout<<zero<<endl;

	for(int i=1;i<=n;i++)
		cout<<dp[i]<<" ";
	cout<<endl;

	for(int i=1;i<=n;i++)
		cout<<state[i]<<" ";
	cout<<endl;*/
	long long posans=0,negans=0;
	long long mone=n-zero;
	long long pos;
	//cout<<zero<<endl;
	for(int i=1;i<=n;i++)
	{
		int distance=n-i;
		if(ara[i]>0 && dp[i]==0)
		{
			pos= zero-state[i]+1;
			//cout<<" pos "<<pos<<endl;
			posans+=pos;
			negans+=distance+1-pos;
			//cout<<"hi1 ";
		}
		else if(ara[i]>0 && dp[i]==-1)
		{
			int total=distance+1;
			mone=total-(zero-state[i]);
			posans+=mone;
			negans+=zero-state[i];
			//cout<<"hi2 ";
		}
		else if(ara[i]<0 && dp[i]==0)
		{
			int total=distance+1;
			mone=total-(zero-state[i]+1);
			posans+=mone;

			negans+=zero-state[i]+1;
			//cout<<"hi3 ";
		}
		else if(ara[i]<0 && dp[i]==-1)
		{
			pos= zero-state[i];
			posans+=pos;
			negans+=distance+1-pos;
			//cout<<"hi4 ";
		}
		//cout<<negans<<" "<<posans<<endl;
	}
	cout<<negans<<" "<<posans<<endl;

	return 0;
}