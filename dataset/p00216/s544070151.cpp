#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    while (cin>>n) {
        if (n==-1) {
            break;
        } else {
            int d;
            if (n>30) {
                cout<<4280-(1150+1250+1400+(n-30)*160)<<endl;
            } else if (n>20) {
                cout<<4280-(1150+1250+(n-20)*140)<<endl;
            } else if (n>10) {
                cout<<4280-(1150+(n-10)*125)<<endl;
            } else {
                cout<<4280-1150<<endl;
            }
        }
    }
}

