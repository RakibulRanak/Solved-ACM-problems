#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ara[n];
		map<int, int>m;
		for (int i = 0; i < n; i++) 
			cin >> ara[i];


		bool check = true;
		int size = 0, maxx = 0;
		int start = 0;

		for (int i = 0; i < n; i++)
		{
			int temp = ara[i];
			m[temp] = 1;
			int nowmax = temp;
			
			if (nowmax < maxx)
				check = false;

			else if (nowmax == maxx)
			{

				if (size <= 0)
					check = false;
				else
				{
					size--;
				}
			}
			else {
				size += temp - start - 1;
				maxx = nowmax;
			}
			
			start = temp;

		}

		if (!check)
			cout << -1 << endl;

		else
		{
			vector<int>vec;
			for (int i = 0; i < n; i++)
			{
				if (m[i + 1] == 0)
				{
					vec.push_back(i + 1);
					//cout<<"chg "<<i+1<<endl;
				}
			}
			map<int, int>mmm;
			int z = 0;
			sort(vec.begin(),vec.end());
			for (int i = 0; i < n; i++)
			{
				int temp = ara[i];
				mmm[temp]++;
				//cout<<temp<<" he"<<endl;
				if (mmm[temp] > 1)
				{
					cout << vec[z] << " ";
					z++;
				}
				else
				{
					cout << temp << " ";
				}
			}
			cout << endl;
		}
	}

	return 0;
}