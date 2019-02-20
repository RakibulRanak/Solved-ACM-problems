#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
        cin>>a[i];
    for(int i=0;i<3;i++)
        cin>>b[i];
    int A=0;
    int B=0;
    for(int i=0;i<3;i++)
        {
            if(a[i]>b[i])
                A++;
            else if(b[i]>a[i])
                B++;
        }
    cout<<A<<" "<<B<<endl;
    return 0;


}
