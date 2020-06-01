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
		int a,b,c,d,k;
		cin>>a>>b>>c>>d>>k;
		int pen=(a+c-1)/c;
		int pencil=(b+d-1)/d;
		if(pen+pencil>k)
			cout<<-1<<endl;
		else
			cout<<pen<<" "<<pencil<<endl;
	}

	return 0;
}