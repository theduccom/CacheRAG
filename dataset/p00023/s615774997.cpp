#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        double xa, ya, ra, xb, yb, rb;
        cin>>xa>>ya>>ra>>xb>>yb>>rb;
        double d=hypot(fabs(xb-xa), fabs(yb-ya));
        if(ra>d+rb) cout<<"2\n";
        else if(rb>d+ra) cout<<"-2\n";
        else if(ra+rb<d) cout<<"0\n";
        else cout<<"1\n";
    }
    return 0;
}