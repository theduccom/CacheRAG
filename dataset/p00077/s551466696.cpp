#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define ALL(T) T.begin(), T.end()
#define mp make_pair
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;

int main(void){
    for(string in; cin >> in; cout << endl)
        rep(i, in.size()){
            if(in.at(i) == '@'){
                rep(j, in[i + 1] - '0') cout << in[i + 2];
                i += 2;
            }
            else cout << in[i];
        }

    return 0;
}