#include<bits/stdc++.h>
using namespace std;
int ara[101];

int main()
{
    int n,temp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        ara[temp]=1;
    }
    int count=0;
    for(int i=0; i<=100; i++)
    {
        if(ara[i]==1)
            count++;
    }
    if(count>3)
        cout<<-1<<endl;
    else if(count==1)
        cout<<0<<endl;

    else
    {
        int ara2[count];
        int j=0;
        for(int i=0; i<=100; i++)
        {
            if(ara[i]==1)
            {
                ara2[j]=i;
                j++;
            }
        }
        if(count==3)
        {
            sort(ara2,ara2+3);
            if(ara2[1]-ara2[0]==ara2[2]-ara2[1])
                  cout<<ara2[1]-ara2[0]<<endl;
            else
                cout<<-1<<endl;
        }
        else
        {
            sort(ara2,ara2+2);
            int temp=ara2[1]-ara2[0];
            if(temp%2==0)
              cout<<temp/2<<endl;
            else
                cout<<temp<<endl;
        }



    }

    return 0;
}
