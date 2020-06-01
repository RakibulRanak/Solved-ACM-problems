#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    else if(n==0)
    {
        cout<<10<<endl;
        return 0;
    }
    int ara[100];
    int j=0;
    while(n>1)
    {
        int i;
        for ( i=9; i>=2; i--){
            if (n%i==0){
                    ara[j]=i;
                    j++;
                  // cout<<i<<endl;
                    n=n/i;
                    break;
            }
        }
       if(i==1){
            cout<<-1<<endl;
            return 0;
        }
    }
    sort(ara,ara+j);
    for(int i=0;i<j;i++)
        cout<<ara[i];
    cout<<endl;
    return 0;

}
