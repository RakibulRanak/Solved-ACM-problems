#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    string input,a;
    cin>>input;
    a=input;
    int i,j=0,sizee=0;
    for( i=1;i<input.size();i++)
    {
        if(a[0]==input[i])
        {
            int x;
            j=0;
            for( x=i;x<input.size();x++)
            {
                if(a[j]==a[x]){
                    sizee++;
                    j++;
                }
                else
                    break;
            }
            if(x==input.size())
                break;
            else
                sizee=0;
        }
    }

    if(sizee==0)
    {
        for(int i=0;i<m;i++)
            cout<<input;
    }
    else
    {
        a=input.substr(0,input.size()-sizee);
        for(int i=0;i<m;i++)
             cout<<a;
        cout<<input.substr(input.size()-sizee,sizee);
    }
    cout<<endl;
    return 0;
}
