#include <iostream>
using namespace std;
#define n_size 100000

int main(){
    bool isPrime[n_size];
    isPrime[0] = false;
    isPrime[1] = false;

    for (unsigned i = 2; i < n_size; i++)
        isPrime[i] = true;

    for (unsigned i = 2; i * i < n_size; i++){
        if (isPrime[i]){
            for (unsigned j = (i * i); j < n_size; j += i)
                isPrime[j] = false;
        }
    }

    unsigned n;
    while(cin >> n){
        unsigned a = n-1;
        unsigned b = n+1;
        while(!isPrime[a])
            a--;
        while(!isPrime[b])
            b++;
        cout << a << " " << b << endl;
    }
    
    return 0;
}
