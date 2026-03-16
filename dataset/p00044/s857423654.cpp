#include <iostream>
using namespace std;

bool ifnprime[100000];

void set(){
    ifnprime[0] = ifnprime[1] = 1;
    for(int n = 2; n * n < 100000; n++){
        if( !ifnprime[n] ){
            int j = n*n;
            while( j < 100000 ){
                ifnprime[j] = 1;
                j += n;
            }
        }
    }
}

int main(){
    int m;
    set();
    while( cin >> m ){
        for(int i = m-1; i >= 0; i-- ){
            if( !ifnprime[i] ){
                cout << i << ' ';
                break;
            }
        }
        for(int i = m+1; i < 100000; i++){
            if( !ifnprime[i] ){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}