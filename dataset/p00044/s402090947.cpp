#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstring>
#define loop(i,b,n) for(int i = b; i<n; i++)
#define rep(i,n)  loop(i,0,n)
#define INF 10000
#define  MAX 1e7
using namespace std;

int main (){
    vector<bool>check(MAX+1);
    rep(i, MAX+1)
    check[i] = true;
    vector<int>Primenumber(MAX+1,0); //Primearray
    int counter =0;                  //Primearray counter;
    for(int i = 2; i<MAX+1;i++){
        if(check[i]){
            for(int j = 2;i*j<MAX;j++)
                check[i*j] = false;//?´???°??????Primearray???????´??????????????????°?????¨???false???
            Primenumber[counter] = i;
            counter++;
        }
    }
    int n; while(cin >> n){
    int bigans = 0,sans= 0;
    for(int i = n+1 ;n<MAX;i++)
        if(check[i]){bigans = i; break;}
    for(int i = n-1; i>1;i--)if(check[i]){sans = i; break;}
        cout << sans << " " << bigans<< endl;  }  return 0;
} 