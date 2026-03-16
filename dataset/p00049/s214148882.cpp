#include <iostream>
#include <string>

using namespace std;

int main(void){
    
    int n;
    char ten;
    string blood;
    int a,b,ab,o;
    a = b = ab = o = 0;
    while( cin >> n >> ten >> blood ){
        if( blood == "A" )a++;
        if( blood == "B" )b++;
        if( blood == "AB")ab++;
        if( blood == "O" )o++;
    }
    cout << a << endl;
    cout << b << endl;
    cout  <<  ab << endl;
    cout  << o << endl;
    return 0;
}