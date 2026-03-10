#include <iostream>
using namespace std;
int main(){
    for(int ii=1;ii<10;ii++){
        for(int i=1;i<10;i++){
            cout << ii << "x" << i << "=" << i*ii << endl;
        }
    }
    return 0;
}