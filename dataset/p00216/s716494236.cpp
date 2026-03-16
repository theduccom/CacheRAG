#include<iostream>
using namespace std;
int w;
main()
{
    while(cin>>w,w>=0)
    {
        int ans=4280-1150;
        w-=10;
        if(w>0)
        {
            if(w<=10)ans-=w*125;
            else ans-=1250;
            w-=10;
        }
        if(w>0)
        {
            if(w<=10)ans-=w*140;
            else ans-=1400;
            w-=10;
        }
        if(w>0)ans-=w*160;
        cout<<ans<<endl;
    }
}
