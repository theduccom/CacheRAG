#include <iostream>
#include <cassert>
using namespace std;

int main(void) {
    for(int r = 1; r <= 9; r++) {
        for(int c = 1; c <= 9; c++) {
            //assert(c > 9);
            cout << r << "x" << c << "=" << r * c << endl;
        }
    }
    return(0);
}