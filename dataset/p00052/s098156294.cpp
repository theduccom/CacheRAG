#include <iostream>

using namespace std;

int main(void){
    int n;
    int count;
    while(cin>>n,n!=0){
        count=0;
        while(n){
            n=n/5;
            count=count+n;
        }
        cout<<count<<endl;
    }
    return(0);
}