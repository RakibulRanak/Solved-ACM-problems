#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n , m ;
        cin >> n >> m;
        int len=0;
        long long temp=9;
        while(temp<=m)
        {
            len++;
            temp*=10;
            temp+=9;
        }
        cout<<len*n<<endl;
    }

    return 0;

}