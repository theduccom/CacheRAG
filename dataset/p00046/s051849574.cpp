#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    double a,mi=1000000,ma=0;
    while(cin>>a){
        mi=min(mi,a);
        ma=max(ma,a);
    }
    cout<<ma-mi<<endl;
    return 0;
}
