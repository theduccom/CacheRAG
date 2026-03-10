#include<iostream>
using namespace std;

int main(){
    int k;
    int i,j;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++){
            k = i * j;
            cout << i << "x" << j << "=" << k << endl;   
        }
    }


    return 0;
}
