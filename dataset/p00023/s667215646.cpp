#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    int loop;
    double xa, ya, ra, xb, yb, rb;
    
    cin >> loop;
    for(int i = 0; i < loop; i++){
        cin >> xa >> ya >> ra >> xb >> yb >> rb;
        double d = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));

        if(d < ra - rb){
            cout << 2 << endl;
        } else if(d < rb - ra){
            cout << -2 << endl;
        } else if(d > rb + ra){
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }
}

