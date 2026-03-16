#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

void makePrimeNumber(int N, vector<bool>& prime) // 0ツ暗按湘」Nツ暗按可コツづ個青ョツ青板つゥツづァツ素ツ青板づーツ探ツつキ
{
    prime.assign(N+1, true);
    prime [0] = prime[1] = false;
    for(int i=2; i*i<=N; i++){
        if(prime[i]){
            for(int j=i; i*j<=N; j++){
                prime[i*j] = false;
            }
        }
    }
}

int main()
{
    vector<bool> prime;
    makePrimeNumber(10000, prime);

    vector<int> ret(10001);
    for(int i=5; i<=10000; ++i){
        if(prime[i] && prime[i-2])
            ret[i] = i;
        else
            ret[i] = ret[i-1];
    }

    for(;;){
        int n;
        cin >> n;
        if(n == 0)
            return 0;

        cout << (ret[n]-2) << ' ' << ret[n] << endl;
    }
}