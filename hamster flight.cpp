#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        float v,k1,k2;
        cin>>v>>k1>>k2;
        double deg,max=0,rad;
        if(k2==0)
        {
            deg=0.785;
            max=k1*v*v/10.0;
            cout<<setprecision(3)<<fixed<< deg<<" "<<max<<endl;


        }
        else if(k1==0)
        {
            deg=1.571;
            max=k2*v*v/20.0;
            cout<<setprecision(3)<<fixed<< deg<<" "<<max<<endl;

        }
        else
        {
            deg=(atan(-4.0*k1/k2)+pi)/2.0;;

            max=k2*v*v*sin(deg)*sin(deg)/(2.0*10.0)+k1*v*v*sin(2.0*deg)/10.0;
            cout<<setprecision(3)<<fixed<< deg<<" "<<max<<endl;

        }


    }
    return 0;
}
