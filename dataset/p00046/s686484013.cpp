#include <iostream>
using namespace std;
int main(){
    double x,high=0,low=1000000;
    while(cin>>x){
        if(x>high)high=x;
        if(x<low) low=x;
    }
    cout<<high-low<<endl;
}