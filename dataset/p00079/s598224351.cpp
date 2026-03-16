#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#include <typeinfo>

#define INF 100000000
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
typedef long long ll;


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

typedef vector<int> VI;
typedef pair<int,int> PII;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(a)  (a).begin(),(a).end()
#define PB push_back
#define sz size()

const double EPS = 1e-10;



double len(double xa,double ya,double xb,double yb){
    return sqrt( (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb) );
}

double solve(double xa,double ya,double xb,double yb,double xc,double yc){
    double a,b,c;
    a=len(xa,ya,xb,yb);
    b=len(xa,ya,xc,yc);
    c=len(xb,yb,xc,yc);
//    cout<<"xb="<<xb<<"yb="<<yb<<"xc="<<xc<<"yc="<<yc<<endl;
    
    double z=(a+b+c)/2.0;
    
//    cout<<a<<" "<<b<<" "<<c<<" "<<z<<endl;
    
    double ret=z*(z-a)*(z-b)*(z-c);
//    cout<<ret<<endl;
    return sqrt(ret);
}


int main(){
    double x[30],y[30];
    double ans=0;
    double centerx=0,centery=0;
    int count=0;

    for(int i=0;;i++){
        char ch;

        if( !( cin>>x[i] && cin>>ch && cin>>y[i]) )break;
        
        count++;
        centerx+=x[i];
        centery+=y[i];
    }
    
    centerx/=count;
    centery/=count;

    rep(i,count){
//        cout<<x[i%count]<<"--"<<y[i%count]<<endl;
        ans+=solve(centerx,centery,x[i],y[i],x[(i+1)%count],y[(i+1)%count]);
//        cout<<"solve"<<i<<"="<<ans<<endl;
    }
    
    cout<<ans<<endl;
    
    return 0;
}