#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n-1];
    long long sum=0,maxh=0,maxl=0;
    for(int i=0; i<n-1; i++)
    {
        scanf("%d",&ara[i]);
        sum+=ara[i];
        if(sum>maxh)
            maxh=sum;
        else if(sum<maxl)
            maxl=sum;
    }
    if((-1*maxl)>maxh)
        maxh=maxl;
    //cout<<maxh<<endl;
    int arr[n],c[n];
    if(maxh>0)
    {
        long long temp=n-maxh;
        //cout<<temp<<" ";
        arr[0]=temp;
        c[0]=temp;
        for(int i=0; i<n-1; i++)
        {
            temp+=ara[i];
            arr[i+1]=temp;
            c[i+1]=temp;
            //cout<<temp<<" ";
        }

    }
    else
    {
        long long temp=1+(maxh*-1);
       // cout<<temp<<" ";
       arr[0]=temp;
       c[0]=temp;
        for(int i=0; i<n-1; i++)
        {
            temp+=ara[i];
            //cout<<temp<<" ";
            arr[i+1]=temp;
            c[i+1]=temp;
        }

    }
    bool abc=true;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            cout<<-1<<endl;
            abc=false;
            break;
        }
    }
    if(abc)
    {
        for(int i=0;i<n;i++)
    {

            cout<<c[i]<<" ";


    }
    cout<<endl;
    }
    return 0;
}
