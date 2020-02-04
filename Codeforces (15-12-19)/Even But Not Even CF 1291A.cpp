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
		cin>>n;
		string s;
		cin>>s;
		int sum=0;
		int sumt[n];
		int jur[n],bijur[n],j=0,b=0;
		for(int i=0;i<n;i++)
		{
			sum+=(int)s[i]-(int)'0';
			sumt[i]=sum;

			int last=(int)s[i]-(int)'0';
			if(last%2==1)
			{
				b++;
			}
			else
			{
				j++;
			}
			jur[i]=j;
			bijur[i]=b;
			//cout<<sum<<endl;
		}
		
		int i=n-1;
		while(i>=0)
		{
			int last=(int)s[i]-(int)'0';
			if(last%2==1)
				break;
			i--;
		}
		//cout<<i<<endl;

		if(i<=0)
		{
			cout<<-1<<endl;
		}
		else
		{
			if(sumt[i]%2==0)
			{
				for(int j=0;j<=i;j++){
					int last=(int)s[j]-(int)'0';
					if(last==0)
						continue;
					cout<<s[j];
				}
				cout<<endl;
			}
			else if(sumt[i]%2==1 && bijur[i]>1)
			{	
				int yyy=1;
				
				for(int j=0;j<=i;j++)
				{	
					int last=(int)s[j]-(int)'0';
					if(yyy==1 && last%2==1)
					{
						yyy=2;
						continue;
					}
					if(last==0)
						continue;
					cout<<s[j];
				}
				cout<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		}
	
	}

	return 0;

}