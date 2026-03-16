#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const int INF=1<<20;

int main(){
    double top=-INF,btm=INF;
    double height;

    while(cin>>height){
        top=max(top,height);
        btm=min(btm,height);
    }

    cout<<setprecision(1)<<setiosflags(ios::fixed)<<top-btm<<endl;
    return 0;
}