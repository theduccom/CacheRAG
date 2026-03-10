#include<iostream>
using namespace std;

int main(){
    int i, j, ans;

    for(i = 1; i < 10; i++){
        for(j = 1; j < 10; j++){
            ans = i * j;
            /* output */
            cout << i << "x" << j << "=" << ans << endl;
        }
    }

    return 0;
}