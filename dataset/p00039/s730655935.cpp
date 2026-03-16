#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
using namespace std;

#define pb         push_back
#define mp         make_pair
#define ll         long long
#define PI         acos(-1.0)
#define ALL(A)     ((A).begin(), (A).end())
#define vsort(v)   sort(v.begin(),v.end())
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)

int main(){
    string s;
    map<char, int> arab;
    arab['I'] = 1;
    arab['V'] = 5;
    arab['X'] = 10;
    arab['L'] = 50;
    arab['C'] = 100;
    arab['D'] = 500;
    arab['M'] = 1000;
    
    while(getline(cin, s)){
        int ans = 0;
        ans += arab[s[s.length()-1]];
        for(int i=s.length()-1; i>=1; i--){
            if(arab[s[i-1]] < arab[s[i]]) ans -= arab[s[i-1]];
            else ans += arab[s[i-1]];
        }
        cout << ans << endl;
    }
}