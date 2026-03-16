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
    int n;
    while(cin>>n){
        if(n<0)break;
        int sum=1150;
        if(n<=10)goto end;
        
        if(10<n && n<=20){
            sum+=(n-10)*125;
            goto end;
        }
        else sum+=125*10;
        
        if(20<n && n<=30){
            sum+=(n-20)*140;
            goto end;
        }
        else sum+=140*10;
        
        sum+=(n-30)*160;
        
        end:;
        cout<<4280-sum<<endl;
    }
    
}