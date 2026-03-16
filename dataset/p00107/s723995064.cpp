#include<iostream>
using namespace std;

const double eps = 1e-9;

int main() {
    int w,h,l;
    while(cin>>w>>l>>h, w|l|h) {
        int rr = w*w+h*h;
        rr = min(h*h+l*l, rr);
        rr = min(l*l+w*w, rr);
        int n,r;
        cin>>n;
        for(int i=0; i<n; ++i) {
            cin>>r;
            if(r*r*4 > rr) cout<<"OK"<<endl;
            else cout<<"NA"<<endl;
        }
    }
}