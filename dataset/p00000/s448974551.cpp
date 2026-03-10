#include<iostream>
using namespace std;

int main(){
    int i;
    int j;
    int k;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            k = i*j;
            cout << i << "x" << j << "=" << k <<endl;
        }
    }
    return 0;
    
}
