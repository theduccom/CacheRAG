#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cstring>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)

int main(){
    int i,j,k;
    string in;

    while(cin >> in){
        string res;

        i = 0;
        while(i < in.size()){
            if(in[i] == '@'){
                int loop = in[i+1] - '0';
                rep(j,loop) res += in[i+2];
                i += 2;
            } else {
                res += in[i];
            }
            i++;
        }
        cout << res << endl;
    }

    return 0;
}