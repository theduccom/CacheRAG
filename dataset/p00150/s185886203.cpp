#include <iostream>

using namespace std;

int main(){
    bool numbers[10001];
    for(int i=0; i<10001; i++) {
        numbers[i] = false;
    }
    numbers[2] = true;
    numbers[3] = true;
    for(int i=5; i<10001; i+=2) {
        if(i % 3 != 0)
            numbers[i] = true;
    }
    int p = 5;
    int num = 0;
    while(true) {
        while(true) {
            if(numbers[p]) break ;
            p++;
        }
        for(int i=10000; i>0; i--) {
            if(!numbers[i]) {
                num = i;
                break ;
            }
        }
        if(p*p > num) break ;
        for(int i=p+1; i<10001; i++) {
            if(i % p == 0) numbers[i] = false;
        }
        p++;
    }

    int n;
    while(cin >> n, n != 0) {
        for( ; n>=5; n--) {
            if(numbers[n] && numbers[n-2]) {
                cout << n - 2 << " " << n << endl;
                break ;
            }
        }
    }
    return 0;
}