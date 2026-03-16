#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

double fr(double a, double b, double c){
    if( a > b ) swap(a, b);
    if( b > c ) swap(b, c);
    return sqrt( a*a + b*b );
}

int main(){
    double a, b, c;
    while( cin >> a >> b >> c, a||b||c ){
        double r = fr(a, b, c);
        int n;
        cin >> n;
        while( n-- > 0 ){
            double rr;
            cin >> rr;
            if( 2*rr > r ){
                cout << "OK" << endl;
            }else{
                cout << "NA" << endl;
            }
        }
    }
    return 0;
}