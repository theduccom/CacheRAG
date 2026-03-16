#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_X = 1000000, MAX_N = 30;
int n,x;
bool is_prime[MAX_X+1];
int menu[MAX_N];

void sieve()
{
    fill(is_prime, is_prime + MAX_X + 1, false);
    is_prime[2] = true;
    for(int i = 3; i <= MAX_X; i+=2) {
        is_prime[i] = true;
        for(int j = 3; j * j <= i; j+=2) {
            if(!(i % j)) {
                is_prime[i] = false;
                break;
            }
        }
    }
}

int main()
{
    sieve();
    while(cin >> n >> x && n) {
        for(int i = 0; i < n; i++) 
            cin >> menu[i];
        
        bool price[x + 1];
        fill(price, price + x + 1, false);
        price[0] = true;
        int max = -1;
        for(int i = 1; i <= x; i++) {
            for(int j = 0; j < n; j++) {
                if(i - menu[j] >= 0 && price[i - menu[j]]) {
                    price[i] = true;
                    if(is_prime[i]) 
                        max = i;
                }
            }
        }
        if(max < 0) 
            cout << "NA" << endl;
        else 
            cout << max << endl;
    }
}