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
		long long n, a, b, sum = 0, A = 0, B = 0, zero = 0, one = 0;
		string s;
		cin >> n >> a >> b;
		cin >> s;
		string temp;
		sum += a + 2 * b;
		int j = 1;
		while (s[j] == '0' && j < n)
		{
			zero++;
			j++;
		}
		sum += (a * zero) + (zero * b);
		if (j != n)
			sum += (2 * a);
		int i = j;
		//cout << " > " << sum << endl;
		while (i < n - 1)
		{
			temp = s[i];
			j = i;
			one = 0, zero = 0;
			long long c = sum;
			if (s[j] == '0')
			{
				while (s[j] == '0' && j < n - 1)
				{
					zero++;
					j++;
				}
				if (j == n - 1)
					sum +=(zero* b) + (zero* a);

				else {
					long long t1, t2;
					t1 = ((zero - 1) * b) + ((zero - 1 + 2) * a);
					t2 = ((zero - 1) * 2 * b) + ((zero - 1) * a);
					sum += min(t1, t2);
				}
			}
			else {
				while (s[j] == '1' && j < n - 1)
				{
					one++;
					j++;
				}
				sum += (one + 1) * a;
				sum += (one + 1) * 2 * b;
			}
			//cout << " > " << sum - c << endl;


			i = j;;
		}
		cout<< sum << endl;
	}

	return 0;
}