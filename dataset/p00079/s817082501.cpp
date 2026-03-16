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
#define ALL(a)  (a).begin(),(a).end()
#define pb push_back
#define sz size()

const double EPS = 1e-10;


double solve(vector<double> x,vector<double> y){
    double ret=0;
    pair<double,double> center;
    int angleSum=x.size();
    for(int i=0;i<angleSum;i++){
        center.first +=x[i];
        center.second+=y[i];
    }
    center.first /=angleSum;
    center.second/=angleSum;
    
    for(int i=0;i<angleSum;i++){
        double a,b,c;
        
        a=sqrt(  pow( (x[i] - center.first),2 )                 + pow( (y[i] - center.second),2 )                 );
        b=sqrt(  pow( (x[i] - x[ (i+1)%angleSum] ),2 )          + pow( (y[i] - y[ (i+1)%angleSum] ),2 )           );
        c=sqrt(  pow( (x[ (i+1)%angleSum ] - center.first),2 )  + pow( (y[ (i+1)%angleSum ] - center.second),2 )  );

        
        double z=(a+b+c)/2.0;
        
        double triangleSpace=z*(z-a)*(z-b)*(z-c);
        
        ret+= sqrt( triangleSpace );
        
    }
    return ret;
}



int main(){
    vector<double> x,y;
    double ans;
    
    double a,b;
    char ch;
    while( cin>>a && cin>>ch && cin>>b ){
        x.pb(a);
        y.pb(b);
    }
    cout<<solve(x,y)<<endl;
}