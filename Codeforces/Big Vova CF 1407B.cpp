#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int highgcd = 0, highvalue = 0, highind = 0;
		int vec[n];
		for (int i = 0; i < n; i++)
			cin >> vec[i];
		sort(vec, vec + n, greater<int>());

		//testb

		int baba = vec[0];
		cout << vec[0] << " ";
		for (int i = 1; i < n; i++)
		{
			highgcd = 0, highvalue = 0, highind = 0;
			for (int j = 1; j < n; j++)
			{
				if (vec[j] == -1)
					continue;

				int temp = __gcd(baba, vec[j]);

				if (temp > highgcd)
				{
					highgcd = temp;
					highvalue = vec[j];
					highind = j;
				}
				//test2
			}
			cout << vec[highind] << " ";
			baba = highgcd;
			vec[highind] = -1;

		}
		cout << endl;

	}

	return 0;
}