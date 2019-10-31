#include<bits/stdc++.h>
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
    	int ara[n+1];
    	ara[0]=0;
    	for(int i=1;i<=n;i++)
    	{
    		cin>>ara[i];
    	}
    	int i=1;
    	//cout<<"case "<<t<<endl;
    	while(i<=n)
    	{
    		int parent=i;
    		int count=1;
    		i=ara[i];
    		while(i!=parent)
    		{
    			count++;
    			i=ara[i];
    			//cout<<"h "<<i<<endl;
    		}
    		cout<<count<<" ";
    		i++;
    	}
    	cout<<endl;
    }


    return 0;


}