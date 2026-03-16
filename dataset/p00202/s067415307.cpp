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
    makePrimeNumber(1000000, prime);

    for(;;){
        int n, x;
        cin >> n >> x;
        if(n == 0)
            return 0;

        vector<bool> value(x+1, false);
        value[0] = true;
        for(int i=0; i<n; ++i){
            int a;
            cin >> a;
            for(int j=0; j+a<=x; ++j){
                if(value[j])
                    value[j+a] = true;
            }
        }

        int i = x;
        while(i > 0 && (!value[i] || !prime[i]))
            -- i;
        if(i == 0)
            cout << "NA" << endl;
        else
            cout << i << endl;
    }
}