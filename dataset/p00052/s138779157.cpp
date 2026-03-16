#include <iostream>
using namespace std;

int main(void){
    int n;
    
    while(true){
        cin >> n;
        if(!n) break;
        
        int ans = 0;
        while(n) ans += n/=5;
        cout << ans << endl;
    }
    
    return 0;
}