#include <iostream>
using namespace std;

int main(){
    int n;

    while(cin >> n, n != 0){
        unsigned long long int cnt = 0;
        while(n >= 5){
            cnt+= n / 5;
            n /= 5;
        }
        cout << cnt << endl;
    }
    return 0;
}