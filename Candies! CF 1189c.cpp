#include<bits/stdc++.h>
using namespace std;
int ara[100005];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ara[i];
		ara[i]+=ara[i-1];
	}
	int t;
	cin>>t;
	int start,end;
	while(t--)
	{
		cin>>start>>end;
		cout<<(ara[end]-ara[start-1])/10<<endl;
	}

	return 0;

}
