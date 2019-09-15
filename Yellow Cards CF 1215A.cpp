#include <bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int team1,team2,card1,card2,total;
	cin>>team1>>team2>>card1>>card2>>total;

	int low=0,high=0;
	int temp=team1*(card1-1) + team2*(card2-1);
	//cout<<temp<<endl;
	if(total<=temp)
		low=0;
	else
	{
		low=min(team1+team2,(total-temp));
	}
	cout<<low<<" ";
	if(card2<=card1)
	{
		int temp=total/card2;
		temp=min(temp,team2);
		high+=temp;
		int remain= total-(temp*card2);
		temp=remain/card1;
		temp=min(temp,team1);
		high+=temp;

	}
	else
	{
		int temp=total/card1;
		temp=min(temp,team1);
		high+=temp;
		int remain= total-(temp*card1);
		temp=remain/card2;
		temp=min(temp,team2);
		high+=temp;
	}
	cout<<high<<endl;



	return 0;
}