#include <iostream>

using namespace std;

int main() {
    for(int XX = 0;XX<20;XX++){
    int n;
    cin >> n;
    
    if(n==0){
        break;
    }
    
    int x[10] = {0};
    for(int i=0;i<n;i++){
        int c;
        cin >> c;
        x[c]++;
    }
    
    for(int i=0;i<10;i++){
        if(x[i]!=0){
            for(int j=0;j<x[i];j++){
                cout << "*";
            }
            cout << endl;
        }
        else{
            cout << "-" << endl;
        }
    }
    }
    return 0;
}
