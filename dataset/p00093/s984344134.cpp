#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>
#define chmin(a, b) ((a)=min((a), (b)))
#define chmax(a, b) ((a)=max((a), (b)))
#define fs first
#define sc second
#define eb emplace_back
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;

const ll MOD=1e9+7;
const ll INF=1e18;
const double pi=acos(-1);
const double eps=1e-10;

int dx[]={1, 0, -1, 0};
int dy[]={0, -1, 0, 1};

int main(){
    vector<int> a, b;
    while(1){
        int A, B; cin>>A>>B;
        if(A == 0 && B == 0) break;
        a.eb(A);
        b.eb(B);
    }

    for(int j=0; j<a.size(); j++){
        vector<int> ans;
        for(int i=a[j]; i<=b[j]; i++){
            if(i % 4 == 0){
                if(i % 100 == 0){
                    if(i % 400 == 0){
                        ans.eb(i);
                    }
                }
                else{
                    ans.eb(i);
                }
            }
        }

        if(ans.size() == 0){
            cout << "NA" << endl;
        }
        else{
            for(auto i:ans){
                cout << i << endl;
            }
        }

        if(j != a.size() - 1){
            cout << endl;
        }
    }
}
