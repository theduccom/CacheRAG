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
    int n;
    cin>>n;
    rep(i,n){
        double x[2],y[2],r[2];
        rep(j,2){
            cin>>x[j]>>y[j]>>r[j];

        }
        double len=sqrt( pow(abs(x[0]-x[1]),2) + pow(abs(y[0]-y[1]),2) );

        if( r[0]+r[1]<len ){
            cout<<"0"<<endl;
        }
        else{
            if(len+r[0]<r[1])cout<<"-2"<<endl;
            else if(len+r[1]<r[0])cout<<"2"<<endl;
            else cout<<"1"<<endl;
            }
        }
    return 0;
}