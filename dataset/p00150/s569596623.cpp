#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

vector<int> primes;
void gen(int N){
    N = N + 1;
    bool find[N];
    for(int i=0;i<N;i++){
        find[i] = false;
    }
    for(int i=2;i*i<=N;i++){
        if(find[i]) continue;
        for(int j=i+1;j<N;j++){
            if(find[j])continue;
            if(j%i==0)find[j]=true;
        }
    }
    for(int i=2;i<N;i++){
        if(!find[i])primes.push_back(i);
    }
}

void solve(int n){
    int p,q;
    for(int i=1;;i++){
        if(primes[i] > n) break;
        if(primes[i] - primes[i-1] == 2){
            p = primes[i];q=primes[i-1];
        }
    }
    cout << q << " " << p << endl;
}

int main(){
    gen(10000);
    while(true){
        int n;
        cin >> n;
        if(n==0)break;
        solve(n);
    }
    return 0;
}