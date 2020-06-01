#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	long long ara[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> ara[i][j];
		}
	}
	long long one=sqrtl((ara[0][1]*ara[0][2])/ara[1][2]);
	cout<<one<<" ";
	for(int i=1;i<n;i++)
	{
			long long ans=ara[i][0]/one;
			cout<<ans<<" ";
	}
	

	return 0;
}