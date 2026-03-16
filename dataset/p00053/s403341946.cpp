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

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

bool isPrime(int n){
    if(n==2)return true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}


int main() {
    vector<ll> p;
    
    int c=0;
    for(int i=2;c<=10000;i++){
        if(isPrime(i)){
            p.pb(i);
            c++;
        }
    }
    for(int i=1;i<p.size();i++){
        p[i]=p[i]+p[i-1];
    }
    
    int n;
    while(cin>>n){
        if(n==0)break;
        cout<<p[n-1]<<endl;
    }
    
    return 0;
}