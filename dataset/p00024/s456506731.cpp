#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    double v;
    while(cin>>v) {
        double y=v*v/19.6;
        int f;
        for(f=1; f*5-5<y; ++f);
        cout<<f<<'\n';
    }
    return 0;
}