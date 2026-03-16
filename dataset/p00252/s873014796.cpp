#include <iostream>
using namespace std;

int main(){
    int b[3];
    cin >> b[0] >> b[1] >> b[2];
    if(b[0] == 0 && b[1] == 0 && b[2] == 0) cout << "Close" << endl;
    else if(b[0] == 0 && b[1] == 0 && b[2] == 1) cout << "Open" << endl;
    else if(b[0] == 0 && b[1] == 1 && b[2] == 0) cout << "Close" << endl;
    else if(b[0] == 1 && b[1] == 0 && b[2] == 0) cout << "Close" << endl;
    else if(b[0] == 1 && b[1] == 1 && b[2] ==0) cout << "Open" << endl;
}