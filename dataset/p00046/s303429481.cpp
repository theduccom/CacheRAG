#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
double dn;
int main()
{
    char point;
    double h;
    double m=1000000000, M=0;
    while(cin >> n >> point >> dn)
    {
        h = dn/10 + n;
        M = max(M, h);
        m = min(m, h);
    }
    cout << M-m << endl;
}