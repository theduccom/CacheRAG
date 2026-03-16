#include<iostream>
using namespace std;

int main(void){

    
    double ans,v,t,y;
    
    while(cin >> v){

        t = v / 9.8;
        y = t * t * 4.9;
        ans = y / 5 + 1;
        cout << (int)(ans+1) << endl; 
    }
    return 0;
}