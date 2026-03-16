#include <iostream>
using namespace std;

int main(void){
    int n, p, d1, d2, d, q;
    while(true){
        cin >> n;
        d = 0;
        if(n == 0){
            break;
        }
        for(int i = 0; i < n; i++){
            cin >> p >> d1 >> d2;
            if((d1+d2) > d){
                d = d1+d2;
                q = p;
            }
        }
        cout << q << " " << d << endl;
    }
}
