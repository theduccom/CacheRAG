#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>
using namespace std;

int main(void) {
    double _max, _min;
    double input;
    cin >> input;
    _max = input, _min = input;
    while(cin >> input) {
        _max = max(_max, input); _min = min(_min, input);
    }
    cout << _max - _min << endl;
    return(0);
}