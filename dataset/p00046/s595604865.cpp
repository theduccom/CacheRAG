
#include <iostream>
using namespace std;
int main(){
    double n,sa,max=0,small=1000000;
    while(cin>>n){
        if(max<n)max=n;
        else if(small>n)small=n;
    }
    sa=max-small;
    cout<<sa<<endl;
    return 0;
}