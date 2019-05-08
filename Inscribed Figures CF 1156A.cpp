#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,x1,x2;
    cin>>n;
    long long count =0;
    cin>>x1>>x2;
    if(x1==2)
        {
            if(x2==1)
                count+=3;
            else
            {
                cout<<"Infinite"<<endl;
                return 0;
            }

        }
       else if(x1==1)
        {
             if(x2==2)
                count+=3;
             else
                count+=4;
        }
        else
        {
             if(x2==1)
                count+=4;
            else
                {
                cout<<"Infinite"<<endl;
                return 0;
                }
        }

    for(int i=0;i<n-2;i++)
    {
        cin>>temp;
        if(x2==2)
        {
            if(temp==1)
                count+=3;
            else
            {
                cout<<"Infinite"<<endl;
                return 0;
            }

        }
       else if(x2==1)
        {
             if(temp==2){
                count+=3;
                if(x1==3)
                    count--;

             }
            else
                count+=4;

        }
        else
        {
             if(temp==1)
                count+=4;
            else
                {
                cout<<"Infinite"<<endl;
                return 0;
                }
        }
        x1=x2;
        x2=temp;

    }

    cout<<"Finite"<<endl;
    cout<<count<<endl;
    return 0;
}
