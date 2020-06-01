#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	string s;
	while (n--)
	{
		cin >> s;
		int zero = 0;
		int sum = 0;
		int jur = 0;
		for (int i = 0; i < s.size(); i++)
		{
			int temp = (int)s[i]-48;
			//cout<<temp<<endl;
			if (temp == 0)
				zero = 1;
			if (temp % 2 == 0)
				jur++;

			sum += temp;

		}
		if((zero>0 && jur>1 && sum%3==0)|| (sum==0 &&zero>0))
			cout<<"red"<<endl;
		else
			cout<<"cyan"<<endl;
	}

}