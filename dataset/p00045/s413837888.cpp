#include <iostream>
using namespace std;

int main(){
    int p,n;
    char c;
    int m=0,sum=0,ave=0;
    while(cin>>p>>c>>n){
        m++;
        ave+=n;
        sum+=p*n;
    }
    ave=1.*ave/m+.5;
    cout<<sum<<endl
        <<ave<<endl;
}