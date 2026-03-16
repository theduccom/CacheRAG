#include <iostream>
#include <algorithm>
#include <functional>
#include <cctype>
using namespace std;

int main(){
    int n;
    cin >> n;
    while( n-- > 0 ){
        char t[12];
        int l, h;
        cin >> t;
        sort(t, t+8);
        l = atoi(t);
        sort(t, t+8, greater<int>());
        h = atoi(t);
        cout << h - l << endl;
    }
    return 0;
}