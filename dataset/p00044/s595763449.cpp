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
    makePrimeNumber(60000, prime);

    vector<int> num;
    for(int i=0; i<=60000; ++i){
        if(prime[i])
            num.push_back(i);
    }

    for(;;){
        int n;
        if(!(cin >> n))
            return 0;

        vector<int>::iterator it = upper_bound(num.begin(), num.end(), n);
        int tmp = *it;
        -- it;
        if(*it == n)
            -- it;
        cout << (*it) << ' ' << tmp << endl;
    }
}