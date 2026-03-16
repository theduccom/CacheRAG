#include <iostream>
using namespace std;
int main(void){
    int b1,b2,b3;
    cin >> b1 >> b2 >> b3;
    if(b1 == 1 && b2 == 1){
        cout << "Open" << endl;
    }else{
        if(b3 == 1){
            cout << "Open" << endl;
        }else{
            cout << "Close" << endl;
        }
    }
    return 0;
}
