#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    double x, w, h, n, r, min_r;
    while (cin >> x >> w >> h, x || w || h){
	min_r = min(sqrt(x*x+w*w), min(sqrt(x*x+h*h), sqrt(w*w+h*h)));
	cin >> n;
	while (n--){
	    cin >> r;
	    r*=2;
	    (min_r < r)? cout << "OK" : cout << "NA";
	    cout << endl;
	}
    }
}