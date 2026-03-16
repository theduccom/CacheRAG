#include<iostream>
#include<vector>
using namespace std;
const int SIZE = 50000;
bool isprime[SIZE + 1];
vector<int> prime;
void make_prime(){
    for(int i = 2; i <= SIZE; i++){
        isprime[i] = true;
    }
    isprime[0] = false;
    isprime[1] = false;
    for(int i = 2; i <= SIZE; i++){
        if(isprime[i] == false) continue;
        for(int j = i * 2; j <= SIZE; j += i){
            isprime[j] = false;
        }
        prime.push_back(i);
    }
}

int main(){
    make_prime();
    int n;
    while(cin >>n){
        if(n == 0) break;
        int cnt = 0;
        for(int i = 0; i < prime.size(); i++){
            if(prime[i] > (n / 2)) break;
            if(isprime[n - prime[i]]){
                cnt++;
            }
        }
        cout <<cnt <<endl;
    }
    return 0;
}