#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,x;
     long long int count1=0,count2=0;
     cin>>n;
     int ara[100001];
     for(int i=1;i<=n;i++)
     {
         cin>>x;
         ara[x]=i;
     }
     int m,num;
     cin>>m;
     for(int i=0;i<m;i++){
            cin>>num;
            count1=count1+ara[num];
            count2=count2+(n-ara[num]+1);
        }


     cout<<count1<<" "<<count2<<endl;
     return 0;

}
