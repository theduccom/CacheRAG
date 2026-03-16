#include <iostream>
 
using namespace std;
 
bool isLeap(int y){
    if(y % 400 == 0) return true;
    if(y % 100 == 0) return false;
    if(y % 4 == 0) return true;
    return false;
}
 
int main(){
    int a, b;
    bool f = false;
    while(true){
        cin >> a >> b ;
        if(a == 0 && b == 0) return 0;
 
        if(f) { cout << endl; }
        f = false;
        for (int i = a; i < b + 1; i++){
            if(isLeap(i)) {
                cout << i << endl;
                f = true;
            }
        }
        if(!f) { cout << "NA" << endl; f = true;}
    }
    return 0;
}