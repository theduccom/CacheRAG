#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#include<math.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

int main(){
    double rad = 90 / 180 * M_PI, north = 0, east = 0;
    double inputMeter, inputAngle;
    char garbage;

    while(cin >> inputMeter >> garbage >> inputAngle, inputMeter){
            east+= cos(rad) * inputMeter;
            north+= sin(rad) * inputMeter;
        rad+= inputAngle / 180 * M_PI;
    }
    cout << static_cast<int>(north) << endl << static_cast<int>(east) << endl;
}