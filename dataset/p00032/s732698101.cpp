#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    int a, b, c;
    char ch;
    int rect = 0;
    int dia = 0;
    while(cin >> a >> ch >> b >> ch >> c) {
        if (a*a + b*b == c*c) rect++;
        else if (a == b) dia++;
    }
    cout << rect << endl << dia << endl;
    return 0;
}