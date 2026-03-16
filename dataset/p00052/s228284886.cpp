#include<iostream>
using namespace std;

bool p[1000100];

int main(){
    int n;
    while(cin >> n, n){
        int ret= 0;
        while(n/5){n /= 5; ret+=n;}
        cout << ret << endl;
    }
}