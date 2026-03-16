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
    cin>>n;
    rep(afewjo,n){
        int outc=0;
        int p=0;
        int fie[10]={};

        while(outc<3){
            string eve;
            cin>>eve;
            
            if(eve=="HIT"){
                if(fie[3]==1)p++;
                fie[3]=fie[2];
                fie[2]=fie[1];
                fie[1]=1;
            }else if(eve=="OUT"){
                outc++;
            }else if(eve=="HOMERUN"){
                p+=1+fie[1]+fie[2]+fie[3];
                fie[1]=fie[2]=fie[3]=0;
            }
        }
        cout<<p<<endl;
    }
    
    return 0;
}