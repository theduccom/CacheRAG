#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,ans;
    while(cin>>a)
    {
        double ns[10]={a,0};
        ans=a;
        for(int i=1;i<10;++i){
            if(i%2)ns[i]=ns[i-1]*2;
            else ns[i]=ns[i-1]/3;
            ans+=ns[i];
        }
        cout<<setprecision(10)<<ans<<endl;
    }
}