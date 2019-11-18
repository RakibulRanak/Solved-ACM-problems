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
		int n;
		cin >> n;
		int r, p, s;
		cin >> r >> p >> s;
		string x;
		cin >> x;
		int vic = 0;
		char vec[n];
		memset(vec,'x',sizeof(vec));


		for (int i = 0; i < n; i++)
		{
			if(x[i]=='R')
			{
				if(p>0)
				{
					p--;
					vec[i]='p';
					vic++;
				}
			}
			else if(x[i]=='S')
			{
				if(r>0)
				{
					r--;
					vec[i]='r';
					vic++;
				}
			}
			else
			{
				if(s>0)
				{
					s--;
					vec[i]='s';
					vic++;
				}
			}
		}
		//cout<<vic<<endl;
		int temp = (n + 1) / 2;
		if (vic >= temp)
		{
			cout << "YES" << endl;
			for (int i = 0; i < n; i++)
			{
				char c = toupper(vec[i]);
				if(c=='X')
				{
					if(p>0)
					{
						c='P';
						p--;
					}
					else if(s>0)
					{
						c='S';
						s--;
					}
					else
					{
						c='R';
						r--;
					}
				}
				cout << c;
			}
			cout << endl;
		}
		else{
			cout << "NO" << endl;
		
		}
	}
	return 0;
}