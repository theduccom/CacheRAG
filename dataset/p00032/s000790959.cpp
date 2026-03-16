#include<iostream>
using namespace std;

int main(void){

    int a,b,c,rectangular = 0,diamond = 0;
    char c1,c2;


    while(cin >> a >> c1 >> b >> c2 >> c){

        if(a * a + b * b == c * c){
            rectangular++;
        }
        if(a == b){
            diamond++;
        }

    }

    cout << rectangular << endl << diamond << endl;

    return 0;
}