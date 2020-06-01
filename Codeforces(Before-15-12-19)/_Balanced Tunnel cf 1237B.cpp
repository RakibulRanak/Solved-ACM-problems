#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int enter[n];
	int exit[n];
	map<int,int>car;
	for(int i=0;i<n;i++){
		cin>>enter[i];
		car[enter[i]]=1;
	}

	for(int i=0;i<n;i++)
		cin>>exit[i];

	int i=0,j=0,ans=0;

	while(i<n && j<n)
	{	
		//cout<<enter[i]<<" "<<exit[j]<<endl;
		if(car[enter[i]]==0)
		{
			i++;
			//cout<<1<<endl;
			continue;
		}
		else if(enter[i]==exit[j])
		{
			i++;
			j++;
				//cout<<2<<endl;
			continue;
		}
		else
		{	
				//cout<<3<<endl;
			ans++;
			car[exit[j]]=0;
		}

		j++;
	}
	cout<<ans<<endl;



	return 0;
}