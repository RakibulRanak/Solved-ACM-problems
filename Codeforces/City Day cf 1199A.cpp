    #include<bits/stdc++.h>
    using namespace std;
    int ara[100005];
    int main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	int n,x,y;
    	cin>>n>>x>>y;
    	int ara[n];
    	for(int i=0;i<n;i++)
    		cin>>ara[i];
    	
    	for(int i=0;i<n;i++)
    	{
    		int left=0;
    		int right=0;
    		int day=ara[i];
    		bool l=false,r=false;
    		while(left<x)
    		{	
    			left++;
    			if(i-left<0)
    			{
    				l=true;
    				break;
    			}
    			if(ara[i-left]<=day)
    			{
    				left=-1;
    				break;
    			}
    			//cout<<i<<" "<<left<<endl;
    		}
    		if(left==x){
    			l=true;
    			//cout<<"left true"<<endl;
    		}
    		while(right<y)
    		{
    			right++;
    			if(i+right>=n)
    			{
    				r=true;
    				break;
    		
    			}
    			if(ara[i+right]<=day)
    			{
    				right=-1;
    				break;
    			}
    		}
    		if(right==y ){
    			r=true;
    		}
    		if(r&&l)
    		{
    			cout<<i+1<<endl;
    			return 0;
    		}
    	}
    	
    	return 0; 
     
    }