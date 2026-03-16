#include <iostream>
using namespace std;

int main(){
    int rect = 0;
    int dia = 0;
    int a, b, c;
    while(~scanf("%d,%d,%d", &a, &b, &c)){
        if(a*a + b*b == c*c) rect++;
        if(a == b) dia++;
    }
    cout << rect << endl;
    cout << dia << endl;
    return 0;
}