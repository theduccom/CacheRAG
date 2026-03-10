#include <iostream>
using namespace std;

int main(){
    const int n=9;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout << i << "x" << j << "=" << i*j << endl;
        }
    }
    return 0;
}