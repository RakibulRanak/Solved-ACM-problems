#include <bits/stdc++.h>
using namespace std;
int ara[10];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		char c = (char)s[i];
		int temp;
		if (c == 'L')
		{
			int left = 0;
			while (ara[left] != 0)
				left++;
			ara[left] = 1;
		}


		else if (c == 'R')
		{
			int right = 9;
			while (ara[right] != 0)
				right--;
			ara[right] = 1;

		}


		else
		{

			ara[(int)c - 48] = 0;
		}
	}
	for (int i = 0; i < 10; i++)
		cout << ara[i];
	cout << endl;

	return 0;
}