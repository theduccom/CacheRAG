#include <iostream>
#include <string>

using namespace std;

int main(){
    int b1;
    int b2;
    int b3;
    cin >> b1 >> b2 >> b3;
    string result = "";
    if(b1 == 1 && b2 == 0 && b3 == 0){
        result = "Close";
    }
    if(b1 == 0 && b2 == 1 && b3 == 0){
        result = "Close";
    }
    if(b1 == 1 && b2 == 1 && b3 == 0){
        result = "Open";
    }
    if(b1 == 0 && b2 == 0 && b3 == 1){
        result = "Open";
    }
    if(b1 == 0 && b2 == 0 && b3 == 0){
        result = "Close";
    }
    cout << result << endl;
    return 0;
}
