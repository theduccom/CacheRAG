#include<iostream>
using namespace std;
int a,d,w,h,x;
main()
{
    while(cin>>d>>w>>h,d)
    {
        if(d>=w&&d>=h)x=w*w+h*h;
        else if(w>=d&&w>=h)x=d*d+h*h;
        else x=d*d+w*w;
        int n;cin>>n;
        while(n--)
        {
            cin>>a;
            a=a*a*4;
            cout<<(a>x?"OK":"NA")<<endl;
        }
    }
}
