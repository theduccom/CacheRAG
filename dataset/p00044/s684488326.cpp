#include<iostream>
#include<vector>
using namespace std;

const int SIZE = 50030;
bool isprime[SIZE + 1] = {0};
vector<int> prime;
void make_prime(){
    isprime[1] = true;
    isprime[0] = true;
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
        int min, max;
        for(min = n - 1; isprime[min] != false; min--) ;
        for(max = n + 1; isprime[max] != false; max++) ;
        cout <<min <<" " <<max <<endl;
    }
    return 0;
}