#include <iostream>
#include <vector>
#include <cmath>

std::vector<bool> Eratosthenes(const int n){
    std::vector<bool> primes(n+1, true);
    primes[0] = primes[1] = false;

    for(int i=2; i<=std::sqrt(n); ++i){
        if(!primes[i])
            continue;
        for(int j=i*i; j<=n; j+=i)
            primes[j] = false;
    }
    return primes;
}

void MaximumTwinPrimes(const std::vector<bool> &primes){
    for(int i=primes.size()-1; i>=2; --i){
        if(primes[i] && primes[i-2]){
            std::cout << i-2 << " " << i << std::endl;
            return;
        }
    }
}

int main(){
    int n;
    while((std::cin >> n) && n > 0){
        std::vector<bool> primes = Eratosthenes(n);
        MaximumTwinPrimes(primes);
    }
}
