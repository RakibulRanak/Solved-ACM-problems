#include <bits/stdc++.h>
using namespace std;
int ara[301];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int boy,girl,total,atleastboy=0,atleastgirl=0,maxboy,maxgirl;
	cin>>boy>>girl>>total;
	maxgirl=min(total,girl);
	maxboy=min(total,boy);

	if(girl<total){
		atleastboy=total-girl;
		maxboy=min(total,boy);
	}
	if(boy<total){
		atleastgirl=total-boy;
		maxgirl=min(total,girl);
	}
	int count=0;
	int girllow=total-maxboy;
	int girlhigh=total-atleastboy;
	//cout<<atleastgirl<<" "<<maxgirl<<endl;
	for(int i=girllow;i<=girlhigh;i++)
	{
		ara[i]=1;
	}
	for(int i=atleastgirl;i<=maxgirl;i++)
	{
		ara[i]=1;
	}
	for(int i=0;i<=300;i++)
	{
		if(ara[i]==1)
			count++;
	}
	cout<<count<<endl;

	return 0;
}