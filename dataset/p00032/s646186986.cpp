#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    char comma;
    int hishi, tyou;
    hishi = 0;
    tyou = 0;
    while(cin >> a >> comma >> b >> comma >> c){
        if(a == b){
            hishi++;
        }else if(a*a + b*b == c*c){
            tyou++;
        }
    }
    cout << tyou << endl;
    cout << hishi << endl;
}