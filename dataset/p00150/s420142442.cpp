#include <iostream>
#include <cstring>
using namespace std;

const int lim = 10000;
bool prime[lim+10];

int main(){
    int n;
    memset(prime,-1,sizeof(prime));
    for(int i = 3; i <= lim; i += 2)
        if(prime[i])
            for(int j = i*2 ; j <= lim; j += i)
                prime[j] = 0;

    while(cin >> n && n){
        if(n % 2 == 0) n--;
        for(int i = n; i >= 5; i -= 2){
            if(prime[i] && prime[i-2]){
                cout << i-2 << " " << i << endl;
                break;
            }
        }
    }
    return 0;
}