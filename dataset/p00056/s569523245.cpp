#include <iostream>
using namespace std;

bool ifnp[50001];

void set(){
    ifnp[0] = ifnp[1] = 1;
    for(int n = 2; n*n < 50000; n++){
        if( !ifnp[n] ){
            int j = n*n;
            while( j <= 50000 ){
                ifnp[j] = 1;
                j += n;
            }
        }
    }
}

int main(){
    int m;
    set();
    while( true ){
        cin >> m;
        if( !m ) break;
        if( m%2 ){
            cout << !ifnp[m-2] << endl;
        }else{
            int a = 0;
            for(int i = 2; i <= m/2; i++){
                a += ( !ifnp[i] && !ifnp[m-i] );
            }
            cout << a << endl;
        }
    }
    return 0;
}