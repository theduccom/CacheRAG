#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x,y,z;
    while(cin>>x>>y>>z, x|y|z){
        double mr=sqrt(min(x*x+y*y,min(y*y+z*z,z*z+x*x)));
        int n; cin>>n;
        while(n--){
            int r; cin>>r;
            if(mr<r*2) cout<<"OK"<<endl;
            else cout<<"NA"<<endl;
        }
    }
}