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


int main() {
    int n,m;
    while(cin>>n>>m){
        if(n==0 && m==0)break;
        
        vi data;
        
        rep(i,n){
            int a;
            cin>>a;
            data.pb(a);
        }
        
        sort(all(data));
        reverse(all(data));
        

        rep(i,n){
            if((i+1)%m==0){
                data[i]=0;
            }
        }
        int sum=0;
        rep(i,n){
            sum+=data[i];
        }
        cout<<sum<<endl;
    }
    
    return 0;
}