#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(int n){ 
        for(int i = 2; i*i <= n; i++) if(!(n%i)) return false;
        return true;
}
int nextPrime(int n){ 
        while(!isPrime(++n));
        return n;
}
int p(int *list, int n){ 
        if(list[n]){
                return list[n];
        }else{
                list[n] = nextPrime(p(list, n-1));
                return list[n];
        }   
}
int main(){
        int list[10001] = {0};
        list[1] = 2;
        int n;
        cin >> n;
        while(n){
                int s = 0;
                for(int i = 1; i <= n; i++) s += p(list, i); 
                cout << s << endl;
                cin >> n;
        }   
}