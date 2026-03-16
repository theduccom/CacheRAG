#include<iostream>
using namespace std;

int main(){
    
    int n;
    
    while(true){
        int x = 0;
        cin >> n;
        if(n == 0) break;
        for(int i = 5;i<=20000;i *= 5){
            x += n/i;
        }

        cout << x << endl;
        
    }
    
    return 0;
    
}