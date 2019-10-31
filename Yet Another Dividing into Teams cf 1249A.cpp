#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int ara[n][n];
	int i = 0, j = 0;
	bool nich = true;
	int value = 1;
	while (i < n)
	{
		int low = n - 1, high = 0;

		if (i % 2 == 0)
		{
			while (j < n)
			{
				if (j % 2 == 0)
				{
					ara[low][i] = value;
					low--;
				}
				else
				{
					ara[high][i] = value;
					high++;
				}
				value++;
				j++;
			}
		}
		else
		{	
			value+=n;
			int temp=value-1;
			while (j < n)
			{
				if (j % 2 == 0)
				{
					ara[low][i] = temp;
					low--;
				}
				else
				{
					ara[high][i] = temp;
					high++;
				}
				temp--;
				j++;
			}
		}


		j = 0;
		i++;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << ara[i][j] << " ";
		}
		cout << endl;
	}

}