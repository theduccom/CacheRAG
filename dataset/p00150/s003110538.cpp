#include<iostream>
#include<algorithm>
using namespace std;

bool p[1000100];

void erato(){
    fill(p, p+1000100, true);
    p[0] = p[1] = false;

    for(int i=0; i < 1000100; i++){
        if(!p[i]) continue;
        for(int j=i+i; j < 1000100; j += i){
            p[j] = false;
        }
    }
}

int main(){
    erato();
    int n;
    while(cin >> n, n){
        for(int i=n; ; i--)if(p[i] && p[i-2]){cout << i-2 << " " << i << endl;break;}
    }
}