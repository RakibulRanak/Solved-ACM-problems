#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int ara[n];
	map<int, int>m;
	for (int i = 0; i < n; i++) {
		cin >> ara[i];
		m[ara[i]] = 1;
	}

	vector<int>vec;
	for (int i = 1; i <= n; i++) {
		if (m[i] == 0)
		{

			vec.push_back(i);
		}
	}
	sort(vec.begin(), vec.end());
	// for (int i = 0; i <vec.size(); i++) {
	// 	cout<<vec[i]<<endl;
	// }


	int x = 0;
	bool start = true;
	map<int, int>mm;
	for (int i = 0; i < n; i++)
	{
		if (ara[i] != 0){
			//cout << "["<<ara[i]<<"]" << " ";
			cout <<ara[i]<< " ";
		}
		else
		{
			int ind = i;
			ind++;
			//cout<<"("<<x<<")";
			//cout<<"hhhhhhhhh "<<ind<<endl;

			if (vec[x] <= ind && start)
			{
				
				if (x + 1 >= vec.size()) {
					start = false;
					x = 0;
					//cout<<"hhh"<<endl;
				}
				else
				{	
					//cout<<"hi ";
					x++;
					cout << vec[x] << " ";
					mm[vec[x]] = 1;
					x++;
				}

			}
			else if (start)
			{
				//cout<<"d ";
				cout << vec[x] << " ";
				mm[vec[x]] = 1;
				x++;


			}
			else
			{	
				//cout<<"bal ";
				while (mm[vec[x]] != 0 && x<vec.size())
					x++;
				cout << vec[x] << " ";
				x++;
			}
			if(x==vec.size())
			{
				start=false;
				x=0;
			}
		}
	}
}