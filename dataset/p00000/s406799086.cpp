#include <iostream>
using namespace std;
int main(){
    for(int i = 1; 10 > i; i++){
        for(int j = 1; 10 > j; j++){
            cout << i << "x" << j << "=" << i*j << endl;
        }
    }
}
