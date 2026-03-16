#include <iostream>
using namespace std;

int main(){
    int n;
    while( true ){
        cin >> n;
        if( !n ) break;
        int a = 0;
        while( n ){
            n /= 5;
            a += n;
        }
        cout << a << endl;
    }
    return 0;
}