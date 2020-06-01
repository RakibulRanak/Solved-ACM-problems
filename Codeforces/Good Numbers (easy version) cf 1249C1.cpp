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
    	map<int,int>m;
         
    	while(i<=n)
    	{
    		int parent=i;
    		int count=1;
    		int j=ara[i];
             vector<int>vec; 
    		while(j!=parent)
    		{	
    			
    			if(m[j]!=0)
    			{
    				count=m[j];
    				break;
    			}
                vec.push_back(j);
    			count++;
    			j=ara[j];
    		
    		}
    		m[parent]=count;
            for(int x=0;x<vec.size();x++)
            {
                m[vec[x]]=count;
            }
    		cout<<count<<" ";
    		i++;
    	}
    	cout<<endl;
    }


    return 0;


}