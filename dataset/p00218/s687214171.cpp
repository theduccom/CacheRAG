#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <iomanip>
#include <utility>
#include <cstdlib>
#include <sstream>
#include <bitset>
#include <vector>
#include <cstdio>
#include <ctime>
#include <queue>
#include <deque>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef vector<int> VI;
typedef pair<int,int> PII;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(a)  (a).begin(),(a).end()
#define PB push_back
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;

int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        rep(i,n){
            int a,b,c;
            cin>>a>>b>>c;
            if(a==100 ||b==100 || c==100 || ((a+b+c)>=240) || a+b>=180){cout<<"A"<<endl;}
            else if(a+b+c>=210 || ((a+b+c>=150) && (a>=80 || b>=80) )){cout<<"B"<<endl;}
            else{cout<<"C"<<endl;}
            
        }
    }
    return 0;
}