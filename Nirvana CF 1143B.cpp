#include<bits/stdc++.h>
using namespace std;
 
//a simple recursive method
 
long long ans;
 
long long result(long long n)
{
    if(n<10)
    {
        if(n<1)
            return 1;
        return n;
    }
    else
        return max(9*result(n/10-1),(n%10)*result(n/10));
}
 
int main()
{
    long long n;
    cin >> n;
    ans = result(n);
    cout << ans << endl;
    return 0;
}