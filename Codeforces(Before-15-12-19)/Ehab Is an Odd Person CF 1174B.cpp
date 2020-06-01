#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ara[n];
    bool b=false,j=false;

    for( int i=0; i<n; i++ )
    {
        cin>> ara[i];

        if( ara[i]%2==1)
            b=true;

        else
            j=true;
    }

    if( b&&j)
    {
        sort( ara, ara+n );

        for( int i=0; i<n; i++ )
            cout<< ara[i]<<" ";
    }
    else
    {
        for( int i=0; i<n; i++ )
            cout<< ara[i]<<" ";
    }
    return 0;
}
