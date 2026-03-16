#include <iostream>
using namespace std;

const int LIMIT = 200000;
bool ifnotprime[LIMIT+1];
int sp[10001];

void set(){
    ifnotprime[0] = ifnotprime[1] = true;
    sp[0] = 0;
    int i = 0;
    for(int x = 2; x < LIMIT; x++){
        if(!ifnotprime[x]){
            if( i < 10000 ){
                sp[i+1] = sp[i] + x;
                i++;
            }
            if( x <= 1000 ){
                int y = x*x;
                while(y < LIMIT){
                    ifnotprime[y] = true;
                    y += x;
                }
            }
        }
    }
}

int main(){
    set();
    int m;
    while( true ){
        cin >> m;
        if( !m ) break;
        cout << sp[m] << endl;
    }
    return 0;
}