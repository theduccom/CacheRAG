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
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;

int c[200][200];
int t[200][200];
int n,m;


void wf(){
    rep(k,m){
        rep(i,m){
            rep(j,m){
                c[i][j]=min(c[i][j],c[i][k]+c[k][j]);
                t[i][j]=min(t[i][j],t[i][k]+t[k][j]);

            }
        }
    }
}


int main(){
    while(cin>>n>>m){
        rep(i,200){
            rep(j,200){
                if(i==j){
                    c[i][j]=0;
                    t[i][j]=0;
                }
                else{
                    c[i][j]=INF;
                    t[i][j]=INF;
                }
            }
        }
        
        if(n==0 && m==0)break;
        
        rep(i,n){
            int a,b,z,d;
            cin>>a>>b>>z>>d;
            a--;b--;
            c[a][b]=z;
            c[b][a]=z;
            t[a][b]=d;
            t[b][a]=d;
        }
        wf();
        int k;
        cin>>k;
        rep(i,k){
            int p,q,r;
            cin>>p>>q>>r;
            if(r==0){
                cout<<c[p-1][q-1]<<endl;
            }
            else{
                cout<<t[p-1][q-1]<<endl;
            }
        }
        
    }

    return 0;
}