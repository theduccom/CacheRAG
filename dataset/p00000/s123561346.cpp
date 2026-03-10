
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdio>
#include <string>
#include <sstream>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; ++i)
#define repn(i, n) for(int i = 1; i <= (int)n; ++i)
#define pb push_back
#define lb lower_bound
#define mp make_pair
#define ite iterator
#define max2(x, y) ((x) > (y)) ? (x) : (y)
#define max3(x,y,z) max2((x), max2((y),(z)))
#define max4(v,w,x,y) max2(max2((v),(w)), max2((x),(y)))
#define min2(x, y) ((x) > (y)) ? (y) : (x)
#define min3(x,y,z) min2((x), min2((y),(z)))
#define min4(v,w,x,y) min2(min2((v),(w)), min2((x),(y)))
#define ul unsigned long
#define ull unsigned long long
#define INF 1000000007
#define MOD 1000000007
#define fs first
#define sd second

template<typename T>
bool elem(set<T> st, T val){
	return (st.find(val) != st.end());
}

template<typename T>
void printv(vector<T> vt){
    rep(i, vt.size() - 1)
        cout << vt[i] << " ";
    cout << vt[vt.size() - 1] << endl;
}

typedef vector<int> vint;
typedef vector<ul> vul;
typedef vector<ull> vull;
typedef pair<int, int> pii;

int main(void){
    rep(i, 9){
        rep(j, 9){
            printf("%dx%d=%d\n", i+1, j+1, (i+1)*(j+1));
        }
    }
    return 0;
}