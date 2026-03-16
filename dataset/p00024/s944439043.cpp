#include <iostream>
using namespace std;
int main()
{
    double v,hei;
    int flo;
    while(cin>>v)
    {
      //hei=v*v/2*9.8;
      hei=v*v/19.6;
      //cout<<hei<<endl;
      flo=(hei+5)/5+1;
      cout<<flo<<endl;
    }
}