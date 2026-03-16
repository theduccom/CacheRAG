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
    
    while(cin >> input){
        for (int i = 1; i < 100; ++i)
            if(isPrime(input - i)){
                cout << (input - i) << " ";
                break;
            }

        for (int j = 1; j < 100; ++j)
            if(isPrime(input + j)){
                cout << (input + j) << endl;
                break;
            }

    }
    return 0;
}
