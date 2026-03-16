#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define ITER(c) __typeof((c).begin())
#define each(c, it) for(ITER(c) it =(c).begin(); it!=(c).end(); it++)
#define ALL(c) c.begin(), c.end()
#define mp make_pair
#define pb push_back
#define MEMSET(v, h) memset((v), h, sizeof(v))
 
using namespace std; 

typedef pair<int, int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

const int INF = 1 << 24;
 
int main(void){
    int s = 0, m = 0, cnt = 0;
    for(int v, n; scanf("%d,%d", &v, &n) == 2; s += v * n, m += n, cnt ++) ;
    
    printf("%d\n%.0f\n", s, (double)m / (cnt?cnt:1) + 0.5);
 
    return 0;
}