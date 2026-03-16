#include <iostream>
using namespace std;

int main(){
    int n;
    int suc_zero;

    while(cin>>n,n){
        suc_zero=0;
        for(int i=5;i<=n;i+=5){
            int tmp=i;
            while(tmp%5==0){
                suc_zero++;
                tmp/=5;
            }
        }

        cout<<suc_zero<<endl;
    }

    return 0;
}