#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int>vec[n+1];
	int a,b,c;
	for(int i=0;i<n-2;i++)
	{
		cin>>a>>b>>c;
		vec[a].push_back(b);
		vec[a].push_back(c);
		vec[b].push_back(a);
		vec[b].push_back(c);
		vec[c].push_back(a);
		vec[c].push_back(b);
	}
	vector<int>one,two;
	for(int i=1;i<=n;i++)
	{
		if(vec[i].size()==4)
			two.push_back(i);
		else if(vec[i].size()==2)
			one.push_back(i);
	}
	int ara[n];
	ara[0]=one[0];
	ara[n-1]=one[1];
	if(vec[vec[one[0]][0]].size()==4)
	{
		ara[1]=vec[one[0]][0];
		ara[2]=vec[one[0]][1];
	}

	else
	{
		ara[1]=vec[one[0]][1];
		ara[2]=vec[one[0]][0];
	}
	if(vec[vec[one[1]][0]].size()==4)
	{
		ara[n-2]=vec[one[1]][0];
	}
	else
	{
		ara[n-2]=vec[one[1]][1];
	}

	for(int i=3;i<=n-3;i++)
	{
		int start=ara[i-2];
		int sec=ara[i-1];
		//cout<<start<<" "<<sec<<endl;
		int j=0;
		while(j<vec[start].size())
		{

			if(vec[start][j]==sec &&vec[start][j+1]!=ara[i-3])
			{
				ara[i]=vec[start][j+1];
				break;
			}
			else if(vec[start][j+1]==sec &&vec[start][j]!=ara[i-3])
			{
				ara[i]=vec[start][j];
				break;
			}
			j+=2;;
		}

	}
	for(int i=0;i<n;i++)
		cout<<ara[i]<<" ";
	return 0;
}