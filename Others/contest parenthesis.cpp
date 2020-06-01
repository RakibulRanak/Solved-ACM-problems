#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y=0;
    cin>> x;
    getchar();
    for(int i=0; i<x; i++)
    {
        string s;
        getline(cin, s);
        vector<char>vec(s.begin(),s.end());
        vector<char>::iterator it;
        vector<char>::iterator p;
        if(vec.size()%2==1)
        {
            cout<<"No"<<endl;

            goto place;
        }
        else
        {
sp:
            ;
            while(vec.size()!=0)
            {
                y=0;
                for(it=vec.begin(); it!=vec.end(); it++)

                {
                    y++;
                    if(*it==')'||*it==']')
                    {
                        p=it-1;
                        if(*it==']')
                        {
                            if(*p=='[')
                            {
                                vec.erase(it);
                                vec.erase(p);
                                goto sp;
                            }
                            else
                            {
                                cout<<"No"<<endl;
                                goto here;
                            }
                        }
                        else  if(*it==')')
                        {
                            if(*p=='(')
                            {
                                vec.erase(it);
                                vec.erase(p);
                                goto sp;
                            }
                            else
                            {
                                cout<<"No"<<endl;
                                goto here;
                            }
                        }
                    }

                }
                if(y==vec.size())
                {
                    cout<<"No"<<endl;
                    goto here;
                }






            }

        }



        cout<<"Yes"<<endl;
here:
        ;

place:
        ;
        vec.clear();

    }

    return 0;

}

