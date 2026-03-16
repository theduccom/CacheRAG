#include<iostream>
#include<string>
using namespace std;
#define MIRROR 1

int main()
{
    string ss;
    int ans = 0;
    while(cin>>ss)
    {
        int f = 1;
        for(int i=0;i<ss.length();++i)
        {
            if(ss[i]!=ss[ss.length()-i-1] ){f = 0;}

        }

        if(f==1) {ans += 1; }
    }
    cout << ans << endl;
    return 0;
}