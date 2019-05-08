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
    int left=0,right=0,a,b,u;
    while(i<=j)
    {
        if(ara[i]>upore &&ara[j]>upore)
        {
            int temp1=min(ara[i],ara[j]);
            upore=temp1;
            if(ara[i]==ara[j])
            {
                u=upore;
                for(int a=i+1; a<j; a++)
                {
                    if(ara[a]>u)
                    {
                        left++;
                        u=ara[a];
                    }
                    else
                        break;
                }
               // cout<<"left "<<left<<" "<<i<<endl;
                u=upore;
                for(int b=j-1; b>i; b--)
                {
                    if(ara[b]>u)
                    {
                        right++;
                        u=ara[b];
                    }
                    else
                        break;
                }
                //cout<<"right "<<right<<" "<<j<<endl;
                if(left>=right)
                {
                    s+="L";
                    i++;
                    count++;
                }
                else if(right>left)
                {
                    s+="R";
                    j--;
                    count++;
                }
                left=0;
                right=0;

            }
            else if(ara[i]==temp1)
            {
                s+="L";
                i++;
                count++;
            }
            else if(ara[j]==temp1)
            {

                s+="R";
                j--;
                count++;
            }
        }
        else if(ara[i]<=upore &&ara[j]<=upore)
            break;
        else if(ara[i]>upore &&ara[j]<=upore)
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
