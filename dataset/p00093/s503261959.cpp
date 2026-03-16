#include <iostream>
using namespace std;

bool leap(int y){
    if( y%400==0 ) return true;
    if( y%100==0 ) return false;
    if( y%4==0 ) return true;
    return false;
}

int main(){
    int a, b;
    bool first = true;
    while( cin >> a >> b, a||b ){
        if( !first ) cout << '\n';
        bool exist = false;
        for(int i = a; i <= b; i++){
            if( leap(i) ){
                cout << i << endl;
                exist = true;
            }
        }
        if( !exist ) cout << "NA" << endl;
        first = false;
    }
    return 0;
}