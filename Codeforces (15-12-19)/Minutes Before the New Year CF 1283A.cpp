#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int h,m;
		cin>>h>>m;
		if(m!=0){
			h+=1;
			m=60-m;
		}
		h=24-h;
		
		int ans=h*60 +m;
		cout<<ans<<endl;
	}

	
}