#include <iostream>
#include<vector>
using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)
const int N = 10010;

bool isprime[N];
vector<int> prime;

//vectorありver
int makePrime1(bool type){
    REP(i, N) isprime[i] = true;
    isprime[0] = false;
    isprime[1] = false;

    for(int i = 2; i < N; i++){
        if(!isprime[i]) continue;
        prime.push_back(i);
        for(int j = i + i; j < N; j += i) isprime[j] = false;
    }
}

//なしver
int makePrime2(){
    REP(i, N) isprime[i] = true;
    isprime[0] = false;
    isprime[1] = false;

    for(int i = 2; (i * i) <= N; i++){
        if(!isprime[i]) continue;
        for(int j = i + i; j < N; j += i) isprime[j] = false;
    }
}

void dispVector(){
    REP(i, prime.size()){
        cout <<prime[i] <<endl;
    }
}

void dispDx(){
    REP(i, N){
        if(isprime[i]) cout <<i <<endl;
    }
}

int main(){
    makePrime2();

    int n;
    while(cin >>n && n){
        for(int i = n; i >= 2; i--){
            if(isprime[i] && isprime[i - 2]){
                cout <<i - 2 <<" " <<i <<endl;
                break;
            }
        }
    }
    return 0;
}