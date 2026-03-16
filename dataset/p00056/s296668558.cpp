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
    makePrimeNumber(50000, prime);

    vector<int> num;
    for(int i=0; i<=50000; ++i){
        if(prime[i])
            num.push_back(i);
    }

    for(;;){
        int n;
        cin >> n;
        if(n == 0)
            return 0;

        int ret = 0;
        for(unsigned i=0; num[i]<=n/2; ++i){
            if(prime[n-num[i]])
                ++ ret;
        }
        cout << ret << endl;
    }
}