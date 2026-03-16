#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
double x, w, h, n, r, min_r, t;
while(cin>>x>>w>>h, x||w||h){
t = max(max(x, w), h);
min_r = x*x+w*w+h*h-t*t;
cin>>n;
while(n--){
cin>>r;
r =r*r*4;
min_r<r ? cout<<"OK\n" : cout<<"NA\n";
}
} 
return 0;
} 