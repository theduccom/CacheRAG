#include<iostream>
using namespace std;

int main(){
    int N=9;
    for(int i=1; i <= N; i++){
        for(int j=1; j <= N; j++){
            cout<<i<<"x"<<j<<"="<<i*j<<endl;
        }
    }
    return 0;
}
