#include <iostream>
using namespace std;

int main(){
    int b1, b2, b3;
    cin >> b1 >> b2 >> b3;
    if(b1 && !b2 && !b3) cout << "Close" << endl;
    if(!b1 && b2 && !b3) cout << "Close" << endl;
    if(b1 && b2 && !b3) cout << "Open" << endl;
    if(!b1 && !b2 && b3) cout << "Open" << endl;
    if(!b1 && !b2 && !b3) cout << "Close" << endl;
    return 0;
}