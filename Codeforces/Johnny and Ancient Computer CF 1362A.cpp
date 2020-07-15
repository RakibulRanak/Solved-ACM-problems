#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	int t;
	cin >> t;
	while (t--)
	{
		ll a, b;
		cin >> a >> b;
		if (a > b)
			swap(a, b);
		ll arr[] = {8, 4, 2};
		if (b % a != 0)
			cout << -1 << endl;
		else
		{	ll divisor = b / a;
			ll counter = 0;
			int j = 0;
			while (j < 3)
			{

				if (divisor == 8 || divisor == 4 || divisor == 2)
				{
					counter++;
					break;
				}
				if (divisor % arr[j] == 0) {
					divisor /= arr[j];
					counter++;
				}
				else {
					j++;
				}

			}
			if (a == b)
				counter = 0;
			else if (a != b && counter == 0)
				counter = -1;
			else if (divisor != 2 && divisor != 4 && divisor != 8)
				counter = -1;
			cout << counter << endl;

		}

	}

	return 0;
}