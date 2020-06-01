#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num[]={"zero","one","two","three","four","five","six","seven","eight",
    "nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
    "seventeen","eighteen","nineteen"};
    string num2[]={"n","m","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    int n;
    cin>>n;
    if(n<20)
        cout<<num[n]<<endl;

    else
    {
        int temp2=n;
        temp2=temp2/10;
        int temp=n-(temp2*10);
        cout<<num2[temp2];
        if(temp!=0)
            cout<<"-"<<num[temp]<<endl;
        else
            cout<<""<<endl;

    }
    return 0;

}
