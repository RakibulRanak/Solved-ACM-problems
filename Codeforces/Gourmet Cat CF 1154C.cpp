#include<bits/stdc++.h>
using namespace std;
int ara[101];

int main()
{
    int a,b,c,ara[3];

    cin>>a>>b>>c;
    int ans=0;

    if(a>=3 && b>=2 &&c>=2)
    {
        ara[0]=a/3;
        ara[1]=b/2;
        ara[2]=c/2;
        sort(ara,ara+3);
        int highest=ara[0];
        ans=highest*7;
        a=a-(3*highest);
        b=b-(2*highest);
        c=c-(2*highest);
    }
    int temp[]={2,1,1,2,3,1,3};
    int x=0;
    int max=0,j=0;
    int A=a,B=b,C=c;
    while(x<7)
    {
        for(int i=x;i<=(x+6);i++)
        {
            int t=i%7;
            if(temp[t]==1)
            {
                if(a==0)
                 break;
                //cout<<x<<" (a)"<<t<<" "<<a<<endl;
                a--;
                j++;
            }
          else  if(temp[t]==2)
            {
                if(b==0)
                    break;
                 //cout<<x<<" (b)"<<t<<" "<<b<<endl;
                b--;
                j++;
            }
           else if(temp[t]==3)
            {
            if(c==0)
                break;
                 //cout<<x<<" (c)"<<t<<" "<<c<<endl;
                c--;
                j++;
            }
        }
        x++;
        if(j>max)
          max=j;
        j=0;
        a=A;
        b=B;
        c=C;

    }
    ans=ans+max;
    cout<<ans<<endl;

    return 0;
}
