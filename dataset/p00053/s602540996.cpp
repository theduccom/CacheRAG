#include<iostream>
#include<vector>
using namespace std;

const int SIZE = 110000;
vector<int> prime;
bool isprime[SIZE + 1] = {0};

void make_prime(){
    isprime[0] = true;
    isprime[1] = true;
    for(int i = 2; i <= SIZE; i++){
        if(isprime[i]) continue;
        for(int j = i * 2; j <= SIZE; j += i) isprime[j] = true;
        prime.push_back(i);
    }
}

int main(){
    make_prime();
    int n;
    while(cin >>n){
        if(n == 0) break;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += prime[i];
        }
        cout <<sum <<endl;
    }
    return 0;
}