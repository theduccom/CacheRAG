#include <iostream>
using namespace std;


int main(){
    int w;
    while( cin >> w, w+1 ){
        int c = 0, t;
        if( w > 10 ){
            t = w/20?10:w-10;
            c += t * 125;
        }
        if( w > 20 ){
            t = w/30?10:w-20;
            c += t * 140; 
        }
        if( w > 30 ){
            c += (w-30)*160;
        }
        cout << 3130 - c << endl;
    }
    return 0;
}