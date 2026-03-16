#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int rectangle=0, lozenge=0;
    while(true){
        int a, b, c;
        if(!(cin>>a)) break;
        cin.ignore();
        cin>>b;
        cin.ignore();
        cin>>c;
        if(a==b) ++lozenge;
        else if(a*a+b*b==c*c) ++rectangle;
    }
    cout<<rectangle<<'\n'<<lozenge<<'\n';
    return 0;
}