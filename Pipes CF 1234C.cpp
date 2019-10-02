#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		string a,b;
		cin>>a>>b;
		int row=1;
		int nowindex=0;
		char nowvalue=a[0];
		char parent;

		if(nowvalue=='1' || nowvalue=='2')
		{
			parent='2';
			nowindex=nowindex+1;
		}
		else {
			nowindex=0;
			row=2;
			parent='4';
		}
		bool ans=true;
		while(1)
		{	
			if(nowindex==n && row==2 )
			{
				ans=true;
				break;
			}
			else if(nowindex==n&&row==1)
			{
				ans=false;
				break;
			}
			if(row==1)
			{
				nowvalue=a[nowindex];

				if(nowvalue=='2'||nowvalue=='1')
				{
					if(parent=='3'||parent=='2')
					{
						nowindex+=1;
						parent='2';
					}
					else
					{
						ans=false;
						break;
					}
				}
				else
				{
					if(parent=='5')
					{
						parent='3';
						nowindex++;
					}
					else if(parent=='3'||parent=='2')
					{
						parent='4';
						row=2;
					}
					else
					{
						ans=false;
						break;
					}
				}
			}
			else
			{

				nowvalue=b[nowindex];
				if(nowvalue=='2'||nowvalue=='1')
				{
					if(parent=='6'||parent=='2')
					{
						nowindex+=1;
						parent='2';
					}
					else
					{
						ans=false;
						break;
					}
				}
				else
				{
					if(parent=='6'||parent=='2')
					{
						parent='5';
						//no change;
						row=1;
					}
					else if(parent=='4')
					{
						parent='6';
						nowindex++;
					}
					else
					{
						ans=false;
						break;
					}
				}



			}
		//	cout<<row<<" "<<nowindex<<endl;

			
		}
		if(ans)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}



	return 0;
}