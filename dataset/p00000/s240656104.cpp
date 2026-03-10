#include <iostream>
using namespace std;

int main(){
    int a = 1, b = 1;
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            cout << a << "x" << b << "=" << a * b << endl;
            b++;
        }
        b = 1;
        a++;
    }
    return 0;
}