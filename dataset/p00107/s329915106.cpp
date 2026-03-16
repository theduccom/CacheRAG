#include<complex>
#include<algorithm>
#include<iostream>
#include<iomanip>
#include<cmath>
#include<vector>
#include<map>
#include<sstream>
#include<ctime>
#include<cstdio>
#include<cstdlib>
#include<cassert>
#include<deque>
#include<queue>
#include<climits>
#include<list>
#include<stack>
#include<ctime>
#define all(n) n.begin(),n.end()
#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)
#define insert(a,b,c,d) PP(P(a,b),P(c,d))
#define F first
#define S second
#define pb push_back
#define INF (1<<27)
#define EPS 1e-10
#define equals(a,b) (fabs((a)-(b)) < EPS)

using namespace std;
typedef pair<int,int> P;
typedef pair<P,P> PP;
typedef unsigned long long ull;
typedef long long ll;
const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};

class AOJ0107{
private:
  int w,d,h;
  double t_r,f_r,l_r;
public:
  AOJ0107(int w,int h,int d):w(w),h(h),d(d){
    t_r = sqrt(pow((double)w/2.0,2)+pow((double)h/2.0,2));
    f_r = sqrt(pow((double)h/2.0,2)+pow((double)d/2.0,2));  
    l_r = sqrt(pow((double)w/2.0,2)+pow((double)d/2.0,2));  
  }
  ~AOJ0107(){}

  bool judge(double sp){
    if(sp-t_r > EPS)return true;
    if(sp-f_r > EPS)return true;
    if(sp-l_r > EPS)return true;
    return false;
  }

  void run(){
    int cnt;
    cin >> cnt;
    rep(i,cnt){
      int rect;
      cin >> rect;
      if(judge(rect))cout << "OK" << endl;
      else cout << "NA" << endl;
    }

  }



};


int main(){

  while(true){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b+c == 0)break;
    AOJ0107 ans = AOJ0107(a,b,c);
    ans.run();
  }
return 0;
}