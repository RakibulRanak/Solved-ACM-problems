#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[101],b[101];
    gets(a);
    for(int i=0; a[i]!='\0'; i++)
        a[i]=tolower(a[i]);
    gets(b);
    for(int i=0; b[i]!='\0'; i++)
        b[i]=tolower(b[i]);
    if(strcmp(a,b)<0)
        cout<<-1<<endl;
    else if(strcmp(a,b)==0)
        cout<<0<<endl;
    else if(strcmp(a,b)>0)
        cout<<1<<endl;
        return 0;
}
