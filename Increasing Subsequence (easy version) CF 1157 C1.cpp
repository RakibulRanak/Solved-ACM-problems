#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int i=0;
   int j=n-1;
    string s="";
    int count=0;
    int upore=0;
    while(i<=j)
    {
        if(ara[i]>upore &&ara[j]>upore)
        {
            int temp1=min(ara[i],ara[j]);
            upore=temp1;
            if(ara[i]==temp1)
            {
                s+="L";
                i++;
                count++;
            }
            else
            {

                s+="R";
                j--;
                count++;
            }
        }
        else if(ara[i]<upore &&ara[j]<upore)
            break;
        else if(ara[i]>upore &&ara[j]<upore)
        {
            upore=ara[i];
            s+="L";
            i++;
            count++;
        }
        else
        {
            upore=ara[j];
            s+="R";
            j--;
            count++;
        }
    }
    cout<<count<<endl;
    cout<<s<<endl;
    return 0;

}
