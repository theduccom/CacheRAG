#include <iostream>
using namespace std;

int main(){
    int n;
    while( cin >> n ){
        int m = 1, c = 0;
        while(n > 0){
            if( n%2 ){
                if( c ) cout << ' ';
                cout << m;
                c = 1;
            }
            m *= 2;
            n /= 2;
        }
        cout << endl;
    }
    return 0;
}