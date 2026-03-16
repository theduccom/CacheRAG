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

bool isLeep(int n){
    if((n%4==0 && n%100!=0) || n%400==0){
        return true;
    }
    else return false;
}


int main() {
    int a,b;
    bool flag=false;
    while(cin>>a>>b){
        if(a==0 && b==0)break;
        if(flag)cout<<endl;
        flag=true;
        
        int c=0;
        for(int i=a;i<=b;i++){
            if(isLeep(i)){
                c++;
                cout<<i<<endl;
            }
        }
        if(c==0)cout<<"NA"<<endl;
    }
    
    return 0;
}