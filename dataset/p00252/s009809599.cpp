#include "bits/stdc++.h"
#define rep(i,a,n) for(int (i) = (a);(i) < (n);(i)++)
using namespace std;

int main(){
    int a[4] = {1,2,4},n,memo = 0;
    
    
    rep(i,0,3){
        cin >> n;
        memo += n*a[i];
    }
    
    cout << ((memo >= 3)?"Open":"Close") << endl;
    return 0;
}
