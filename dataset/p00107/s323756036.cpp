#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <queue>
#include <cmath>

#define int64 long long int

using namespace std;
typedef pair<int, int> P;

int main()
{
    int x, y, z, n, buf, r;
    while(1){
        cin >> x >> y >> z;
        if(x == 0) break;
        cin >> n;
        
        if(x > y){
            buf = x;
            x = y; 
            y = buf;
        }
        if(y > z){
            buf = y;
            y = z;
            z = buf;
        }
        if(x > y){
            buf = x;
            x = y;
            y = buf;
        }
        
        for (int i=0; i<n; i++) {
            cin >> r;
            if(2*r*2*r > x*x + y*y) cout << "OK";
            else cout << "NA";
            cout << endl;
        }
    }
    return 0;
}