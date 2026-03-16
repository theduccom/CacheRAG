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
    char aa;
    while(cin>>aa){
    char tmp[10][10]={};
    tmp[0][0]=aa;
    rep(i,8) rep(j,8) if(i!=0 || j!=0)cin>>tmp[i][j];
    int data[10][10]={};
    rep(i,8) rep(j,8) data[i][j]=tmp[i][j]-'0';
    
    rep(i,8){
        rep(j,8){
            if(data[i][j]){
                if( i+1<8           && j+1<8 && data[i+1][j] && data[i][j+1] && data[i+1][j+1] ){cout<<"A"<<endl;goto next;}
                if( i+3<8           && data[i+1][j] && data[i+2][j] && data[i+3][j] ){cout<<"B"<<endl;goto next;}
                if( j+3<8           && data[i][j+1] && data[i][j+2] && data[i][j+3] ){cout<<"C"<<endl;goto next;}
                if( i+2<8 && j-1>=0 && data[i+1][j] && data[i+1][j-1] && data[i+2][j-1] ){cout<<"D"<<endl;goto next;}
                if( i+1<8 && j+2<8  && data[i][j+1] && data[i+1][j+1] && data[i+1][j+2] ){cout<<"E"<<endl;goto next;}
                if( i+2<8 && j+1<8  && data[i+1][j] && data[i+1][j+1] && data[i+2][j+1] ){cout<<"F"<<endl;goto next;}
                if( i+1<8 && j-1>=0 && j+1<8 && data[i+1][j] && data[i][j+1] && data[i+1][j-1] ){cout<<"G"<<endl;goto next;}
            }
        }
    }
    next:;
    }
    
    return 0;
}