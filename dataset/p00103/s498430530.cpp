#include<iostream>
using namespace std;
int n,o,a,b,c,p;
string s;
main()
{
    cin>>n;
    while(cin>>s)
    {
        o=p=a=b=c=0;
        do{
            if(s=="OUT")o++;
            else if(s=="HIT")
            {
                if(c)p++,c=0;
                if(b)b=0,c=1;
                if(a)a=0,b=1;
                a=1;
            }
            else
            {
                p+=a+b+c+1;a=b=c=0;
            }
        }while(o<3&&cin>>s);
        cout<<p<<endl;
    }
}
