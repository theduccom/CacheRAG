#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int main() {

    vector<bool> primes(50030);

    for(int i = 0; i < 50030; i++) {
        primes[i] = true;
    }
    primes[0] = false;
    primes[1] = false;

    for(int i = 2; i < 50030; i++) {
        if (primes[i]) {
            for(int k = 2 * i; k < 50030; k+=i) {
                primes[k] = false;
            }
        }
    }

    int n;
    while(cin >> n) {
        for (int i = n - 1; i >= 2; i--) {
            if (primes[i]) {
                cout << i << " ";
                break;
            }
        }

        for (int i = n + 1; i < 50030; i++) {
            if (primes[i]) {
                cout << i << endl;
                break;
            }
        }
    }
     
    return 0;
}