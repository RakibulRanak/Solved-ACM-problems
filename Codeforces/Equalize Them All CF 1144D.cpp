#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int ara[n],temp[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
        temp[i]=ara[i];

    }
    sort(temp,temp+n);
    int max=1,count=1,num=temp[0];
    int t=temp[0];
    for(int i=1; i<n; i++)
    {
        if(temp[i]==t)
            count++;
        else
        {
            t=temp[i];
            count=1;
        }
        if(count>max)
        {
            max=count;
            num=temp[i];
        }
    }
    int index=0;
    for(int i=0; i<n; i++)
    {
        if(ara[i]==num)
        {
            index=i;
            break;
        }
    }
    //cout<<n-max<<endl;
    printf("%d\n",n-max);
    for(int i=index; i>=1; i--)
    {
        if(ara[i-1]<ara[i])
        {
            ara[i-1]=ara[i];
            //cout<<1<<" "<<i<<" "<<i+1<<endl;
            printf("%d %d %d\n",1,i,i+1);
        }
        else if(ara[i-1]>ara[i])
        {
            ara[i-1]=ara[i];
          //  cout<<2<<" "<<i<<" "<<i+1<<endl;
            printf("%d %d %d\n",2,i,i+1);
        }
    }
    for(int i=index; i<n-1; i++)
    {
        if(ara[i]<ara[i+1])
        {
            ara[i+1]=ara[i];
            //cout<<2<<" "<<i+2<<" "<<i+1<<endl;
            printf("%d %d %d\n",2,i+2,i+1);
        }
        else if(ara[i]>ara[i+1])
        {
            ara[i+1]=ara[i];
            //cout<<1<<" "<<i+2<<" "<<i+1<<endl;
            printf("%d %d %d\n" ,1,i+2,i+1);
        }
    }
    return 0;
}
