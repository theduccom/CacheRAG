#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    
    double sqrtNum = sqrt(n);
    for (int i = 3; i <= sqrtNum; i+=2) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {

    int input;
    while(cin >> input,input){
        int count = 0;
        int sum = 0;
        for (int i = 2;; ++i) {
            if (isPrime(i)) {
                count++;
                sum += i;
                if(count == input){
                    cout << sum << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
