#include<iostream>
#include<cmath>
#define Int int
using namespace std;

const int MAX_NUM = 500000;
bool prime_number[MAX_NUM];
 
void isPrime() {
    fill(prime_number, prime_number + MAX_NUM, true);
    prime_number[0] = prime_number[1] = false;
 
    for(int i = 2; i < MAX_NUM; i++) {
        if(prime_number[i])
        for(int j = 2; i*j < MAX_NUM; j++) {
            prime_number[i*j] = false;
        }
    }
}
int main(void){
  int n;
  isPrime();
  while(cin>>n){
    int i;

    for(i = (!prime_number[n]?n:n-1) ; !prime_number[i] ; i --);
    cout<<i<<" ";
    for(i = (!prime_number[n]?n:n+1) ; !prime_number[i] ; i ++);
    cout<<i<<endl;
  }
}