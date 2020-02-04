#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		
		long long sum = 0;
		long long extra = 0;
		int vag=1;
		int n;
		cin>>n;
		sum=n;
		while (vag>0)
		{	
			
			vag=n/10;
			sum+=vag;
			int remain=n%10;
			n=vag+remain;
			//cout<<n<<endl;
		}
		cout << sum << endl;
	}
	return 0;

}