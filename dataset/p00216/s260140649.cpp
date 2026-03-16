#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int charge(int n){
    int res = 1150;
    int per[3] = {125, 140, 160};
    int lim[4] = {10, 20, 30, 100};
    for(int i=0; i<3; i++){
        res += per[i] *max(0, (min(lim[i+1], n) -lim[i]));
    }
    return res;
}

int main(){
    int n;
    while(cin >> n, n!=-1){
        cout << 4280 -charge(n) << endl;
    }
    return 0;
}

