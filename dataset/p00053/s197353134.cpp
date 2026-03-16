#include <iostream>
 
using namespace std;
 
int main(){
    int prime[10001],p = 3,psum[10001],n;
    prime[1] = 2,prime[2] = 3;
    for(int i=5;p < 10001;i++){
        int f = 0;
        for(int j=1;prime[j]*prime[j] <= i;j++) if(i % prime[j] == 0) {f = 1;break;}
        if(!f) prime[p++] = i;
    }
    psum[1] = 2;
    for(int i=2;i < 10001;i++) psum[i] = psum[i-1] + prime[i];
    while(1){
        cin >> n;
        if(!n) break;
        cout << psum[n] << endl;
    }
         
    return 0;
}