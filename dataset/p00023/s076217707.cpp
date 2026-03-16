#include <cmath>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <sstream>
#include <vector>
#define P(a) ((a)*(a))
using namespace std;

int main(){
    double xa,ya,ra,xb,yb,rb,dist;
    int n;
    cin >> n;
    while(n--){
        cin >> xa >> ya >> ra >> xb >> yb >> rb;
        dist=sqrt(P(xb-xa)+P(yb-ya));
        if(ra>rb&&fabs(ra-rb)>dist) cout << "2" << endl;
        else if(ra<rb&&fabs(ra-rb)>dist) cout << "-2" << endl;
        else if(dist<=ra+rb&&fabs(ra-rb)<=dist) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}