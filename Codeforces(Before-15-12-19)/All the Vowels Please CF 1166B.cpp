#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<25)
    {
        cout<<-1<<endl;
        return 0;
    }
    int s=5,t=0;
    while(s<=(n/5)+1)
    {
        if(n%s==0 && n/s>=5)
        {
            t=n/s;
            break;
        }
        s++;
    }
    if(t==0)
        cout<<-1<<endl;
    else
    {
        char ara[5]= {'a','e','i','o','u'};
        for(int i=0; i<t; i++)
        {
            int j=i;
            int k=0;
            while(k<s)
            {
                cout<<ara[j%5];
                j++;
                k++;
            }
        }

    }
    return 0;
}
