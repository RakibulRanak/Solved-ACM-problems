#include<bits/stdc++.h>
using namespace std;
 
int  main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+2*n);
        int first=n;
        int second =n;
        if(n%2==0)
        {
            first=n-1;
            second=n+1;
        }
        int ara1[first];
        int ara2[second];
 
        int j=0,k=0;
        int count=0;
        for(int i=0;i<2*n;i++)
        {
            if(i%2==0 && count<first )
            {
                ara1[j]=ara[i];
                j++;
                count++;
            }
            else
            {
                ara2[k]=ara[i];
                k++;
            }
            
        }
        int t2=ara2[second/2];
        int t1=ara1[first/2];
      
        //cout<<t2-t1<<endl;
        int ans1=t2-t1;
        int ans2=ans1;
 
        if(n%2==0)
        {
            first=n+1;
            second=n-1;
        
        int ara3[first];
        int ara4[second];
 
        int j2=0,k2=0;
        int count2=0;
        for(int i=0;i<2*n;i++)
        {
            if(i%2==1 && count2<second )
            {
                ara4[k2]=ara[i];
                k2++;
                count2++;
            }
            else
            {   
 
                //first
                ara3[j2]=ara[i];
                j2++;
            }
            
        }
        int t3=ara3[first/2];
        int t4=ara4[second/2];
      
        //cout<<t3-t4<<endl;
        ans2=t3-t4;
        }
        cout<<min(ans1,ans2)<<endl;
        
 
    
    }
 
    return 0;
 
}