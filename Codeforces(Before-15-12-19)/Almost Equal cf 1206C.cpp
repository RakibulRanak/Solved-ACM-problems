#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, temp;
	cin >> n;
	if(n%2==0)
		cout<<"NO";
	else
	{
		cout<<"YES"<<endl;
		int i=1;
		while(i<=2*n)
		{
			cout<<i<<" ";
			if(i%2==1)
				i+=3;
			else
				i+=1;

		}
		i=2;
		while(i<=2*n)
		{
			cout<<i<<" ";
			if(i%2==1)
				i+=3;
			else
				i+=1;

		}

	}
	cout<<endl;


	return 0;
}