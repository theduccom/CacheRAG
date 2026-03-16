#include <iostream>
using namespace std;
int main(){
    unsigned int n;
    while(cin >> n, n){
        int c = 0;
        while(n) c += (n /= 5);
        cout << c << endl;
    }
    return 0;
}