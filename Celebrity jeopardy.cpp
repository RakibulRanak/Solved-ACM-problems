#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    int x=1,i=0;
    while(gets(s)){
            i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='"')
        {
            if(x==1)
            {
                cout<<"``";
                x=2;

            }
            else
            {
                cout<<"''";
                x=1;
            }

        }
//        else if(s==' ')
//            cout<<" ";
        else
          cout<<s[i];
        i++;
    }
    cout<<""<<endl;
    }
    return 0;
}
