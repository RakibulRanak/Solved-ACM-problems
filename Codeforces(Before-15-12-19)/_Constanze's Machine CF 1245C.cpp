#include <bits/stdc++.h>
using namespace std;
const int m = 1000000007;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	int a = 1, b = 1, c = 1;
	int n = s.size();

	if (s[0] == 'w' || s[0] == 'm')
	{
		cout << 0 << endl;
		return 0;
	}

	for (int i = 2; i <= s.size(); i++)
	{

		if (s[i - 1] == 'w' || s[i - 1] == 'm')
		{
			cout << 0 << endl;
			return 0;
		}



		if (s[i - 1] == s[i - 2] && (s[i - 1] == 'u' || s[i - 1] == 'n'))
		{
			c = (a + b) % m;
			a = b;
			b = c;
		}
		else {
			a = b;
		}
	}
	cout << c << endl;


}