#include<iostream>
using namespace std;
int main(){
    char q , w , e, b;
    b = 'A';
    while(cin >> q >> e >> w){
        if (e == ','){
            if(b == q){
                b = w;
            }
            else if(b == w){
                b = q;
            }
        }
    }
    cout << b <<endl;
}
