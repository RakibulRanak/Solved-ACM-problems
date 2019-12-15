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
		int n;
		cin>>n;
		vector<int>vec;
		vec.push_back(0);
		int i = 1;
		while (i * i <= n)
		{
			int temp = n / i;

			if (i == temp)
				vec.push_back(i);
			else
			{
				vec.push_back(i);
				vec.push_back(temp);
			}
			i++;
		}

		sort(vec.begin(),vec.end());
		cout<<vec.size()<<endl;

		for( i=0;i<vec.size();i++)
			cout<<vec[i]<<" ";
		cout<<endl;

	}


return 0;
}