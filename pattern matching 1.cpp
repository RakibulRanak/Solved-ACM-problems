#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j=0;
    int count=0;
    string a ="Ranak Rana Ranjit";
    string b="Ran";
    for(int i=0;i<a.size()-b.size()+1;i++)
    {
        for( j=0;j<b.size();j++){
            if(a[i+j]!=b[j]){
                break;
            }
        }
        if (j==b.size()){

            cout<<"found at :"<< i+1<<endl;
            count++;
        }
    }
    cout<<"total found:"<<count<<endl;

}
