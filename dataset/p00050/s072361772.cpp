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

#define HOGE 5000
#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define sz size()


int main(){
    string s;
    getline(cin,s);
    
    rep(i,s.sz-5+1){
        string a[2]={"apple","peach"};
        rep(j,2){
            bool f=true;
            rep(k,5){
                if(s[i+k]!=a[j][k])f=false;
            }
            if(f){
                rep(k,5){
                    s[i+k]=a[!j][k];
                }
                break;
            }
        }
    }
    
    cout<<s<<endl;
    return 0;
}