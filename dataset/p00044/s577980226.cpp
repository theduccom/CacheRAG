#include <iostream>
#include <vector>
using namespace std;

vector<int> sieve(int n);

vector<int> sieve(int n){
    vector<int> primes(n);
    for(int i=2; i<n; i++){
        primes[i] = i;
    }
    for(int i=2; i*i<n; i++){
        if(primes[i]){
            for(int j=i*i; j<n; j+=i){
                primes[j] = 0;
            }
        }
    }
    return primes;
}

int main(){
    vector<int> primes = sieve(50022);
    int n;
    while(cin >> n){
       int lower = n-1;
       int upper = n+1;
       while(primes[lower] == 0) lower--;
       while(primes[upper] == 0) upper++;
       cout << primes[lower] << " " << primes[upper] << endl;
    }
    return 0;
}