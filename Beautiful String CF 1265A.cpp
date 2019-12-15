
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int q;
	cin >> q;
	while (q--)
	{
		string s;
		cin >> s;
		string temp = "";
		bool ans = true;
		int j=0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != '?')
			{
				if(s[i]==s[i-1] && i>0)
				{
					ans=false;
					break;
				}
			}
		
		}
		//cout<<temp<<endl;
		if (!ans)
			cout << -1 << endl;
		else {
			string aa = "";
			for (int i = 0; i < s.size(); i++)
			{
				if (s[i] == '?')
				{
					if (i == 0)
					{
						if (s[i + 1] == '?')
							s[i] = 'a';
						else if (s[i + 1] == 'a' || s[i + 1] == 'b')
							s[i] = 'c';
						else
							s[i] = 'a';
					}
					else if (i == s.size() - 1)
					{

						if (s[i - 1] == 'a' || s[i - 1] == 'b')
							s[i] = 'c';
						else
							s[i] = 'a';
					}
					else
					{
						if (s[i + 1] == '?') {
							if (s[i - 1] == 'a' ||s[i-1]=='b') {
								s[i]='c';
							}
							else
								s[i]='a';
							

						}
						else if (s[i + 1] == 'a')
						{
							if (s[i - 1] == 'a' || s[i-1]=='b') {
								s[i]='c';
							}
						
							if (s[i - 1] == 'c') {
								s[i]='b';
							}
							
						}
						else if (s[i + 1] == 'b')
						{
							if (s[i - 1] == 'b' || s[i-1]=='a') {
								s[i]='c';
							}
						
							if (s[i - 1] == 'c') {
								s[i]='a';
							}
							
						}
						else if (s[i + 1] == 'c')
						{
							if (s[i - 1] == 'c' || s[i-1]=='a') {
								s[i]='b';
							}
						
							if (s[i - 1] == 'b') {
								s[i]='a';
							}
							
						}
						
					}
				}
				
			}
			cout<<s<<endl;
		}
	}


	return 0;
}