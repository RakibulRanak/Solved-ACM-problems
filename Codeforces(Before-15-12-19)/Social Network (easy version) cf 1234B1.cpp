#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, temp;
	cin >> n >> k;
	vector<int>vec;
	map<int, int>m;
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (m[temp] != 0)
			continue;
		else
		{
			if (vec.size() >= k)
			{
				m[vec[x]] = 0;
				x++;
				vec.push_back(temp);
				m[temp] = 1;
			}
			else {
				vec.push_back(temp);
				m[temp] = 1;
			}
		}
	}
	if (vec.size() <= k) {
		cout << vec.size() << endl;
		for (int i = vec.size() - 1; i >= 0; i--)
			cout << vec[i] << " ";
	}
	else {
		cout << k << endl;
		for (int i = vec.size() - 1; i >= vec.size() - k; i--)
			cout << vec[i] << " ";
	}

	//cout<<"hi "<<vec.size()<<endl;

	cout << endl;




	return 0;
}