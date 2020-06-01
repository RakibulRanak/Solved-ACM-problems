#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec;
    vector<int>::iterator it;
    int temp;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    int i;
    while(n>=1)
    {
        i=0;
        for(it=vec.begin(); it!=vec.end()-1; it++)
        {
            i++;
            if(*it>*(it+1))
                goto here;

        }
        cout<<n<<endl;
        break;
        here:
        ;
        n=n/2;
        if(i>=n)
        {
            for(it=vec.begin()+2*n-1; it!=vec.begin()+n-1; it--)
            {
                vec.erase(it);
            }

        }
        else
        {
            for(it=vec.begin(),i=0; i<n;i++ )
                vec.erase(it);

        }
    }
    return 0;
}
