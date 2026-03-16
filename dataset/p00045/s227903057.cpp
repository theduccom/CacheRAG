#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <map>
using namespace std;
 
#define rep(i,n) for(int i=0;i<int(n);++i)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8
 
static const double PI=6*asin(0.5);
typedef complex<double> P;
typedef long long ll;
 
int cou=0;
int x,y;
char t;
ll msum=0,nsum=0;
 
 
int main(){
    while(cin>>x>>t>>y){
        msum+=x*y;
        nsum+=y;
        cou++;
    }
    double res=(double)(nsum)/(double)(cou);
    //cout<<res<<endl;
    cout<<msum<<endl;
    cout<<(int)(res+0.5)<<endl;
    return 0;
}