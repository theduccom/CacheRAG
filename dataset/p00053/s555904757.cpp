#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
const int n = 1000000;
vector<bool> is_prime(n / 2,true);
vector<int> prime_list; 
 
int main()
{
    prime_list.push_back(2);
    for(int i = 1; 2 * i + 1 <= n; ++i){
        if(is_prime[i]){
            prime_list.push_back(2 * i + 1);
            for(int j = 3 * i + 1; 2 * j + 1 <= n; j +=  2 * i + 1){
                is_prime[j] = false;
            }
        }
    }
    vector<int> sum(10001);
    for(int i = 1; i <= 10000; ++i){
        sum[i] = sum[i-1] + prime_list[i-1];
    }
    int n;
    while(cin >> n,n){
        cout << sum[n] << endl;
    }
}