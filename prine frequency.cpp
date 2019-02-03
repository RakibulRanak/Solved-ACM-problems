#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,num,s=1,r=0,t=0,x=0;
    cin>>num;
    for(int g=0;g<num;g++)
    {

        list<char>mylist;
        list<char>::iterator it;
        list<char>::iterator it2;
        string inp;
        cin>>inp;
        for(i=0; i<inp.size(); i++)
        {
            mylist.push_back(inp[i]);
        }
        mylist.sort();
        it=mylist.begin();
        int p=mylist.size();
        s=1;
        t=0;
        x=0;
         cout<<"Case "<<g+1<<": ";
        while(s<p)
        {
            r=1;//if prime r=1
            t++;//loops cycle num
            int v=1;//counter
            it2=it;
            it2++;
            for(; it2!=mylist.end(); ++it2)
            {
                if((*it)==(*it2))
                {
                    v++;
                }
                else
                    break;


            }
            if(v==2||v==3)
              {
               r=1;
               cout<<*it;
              }
            else if(v==1)
                x++;
            else
            {
                for(int i=2; i<=v/2; i++)
                {
                    if(v%i==0)
                    {
                        r=0;
                        x++;
                        break;
                    }

                }
            }
            if(r==1&&v>3){
                cout<<*it;
            }


            int k=1;
            while(k<=v)
            {
                it++;
                s++;
                k++;
            }

        }
        if(t==x)
          cout<<"empty";
        cout<<endl;
    }

    return 0;


}
