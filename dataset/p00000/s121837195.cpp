//#define _GLIBCXX_DEBUG
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <string>
#include <cstring>
#include <sstream>
#include <numeric>
#include <complex>

using namespace std;
typedef long long ll;
typedef pair<int,int> PI;

#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define F first
#define S second
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define SZ(a) (int)((a).size())
#define ALL(a) a.begin(),a.end()
#define FOR(it,a) for(__typeof(a.begin())it=a.begin();it!=a.end();++it)


//低優先度


#include <list>
#include <stack>
#include <iomanip>
#include <fstream>
#include <cassert>
#define REP(i, n) rep (i, n)
#define min3(a,b,c) min((a),min((b),(c)))
#define min4(a,b,c,d) min((a),min3((b),(c),(d)))
#define FLL(a,b) memset((a),b,sizeof(a))
#define CLR(a) memset((a),0,sizeof(a))
#define EPS (1e-8)
template<class T,class U>ostream&operator<<(ostream&o,pair<T,U>&v){return o<<"("<<v.F<<","<<v.S<<")";}
template<class T>ostream&operator<<(ostream&o,vector<T>&v){o<<"{";rep(i,SZ(v))o<<(i?",":"")<<v[i];return o<<"}";}
string i2s(int a){stringstream ss;ss<<a;return ss.str();};
typedef double FP;
typedef complex<FP> pt;
typedef pt P;
typedef pair<pt,pt> line;
FP dot(P a,P b){return real(conj(a)*b);}
FP crs(P a,P b){return imag(conj(a)*b);}
P ortho(P a){return a*P(0,1);}
P ortho(line a){return ortho(a.S-a.F);}
P crspt(P a,P b,P c,P d){b-=a,d-=c;return a+b*crs(d,c-a)/crs(d,b);}
P crspt(line a,line b){return crspt(a.F,a.S,b.F,b.S);}
bool onl(P a1,P a2,P b){return abs(b-a1)+abs(b-a2)<abs(a1-a2)+EPS;}
bool onl(line a,P b){return onl(a.F,a.S,b);}
bool iscrs(line a,line b){P c=crspt(a,b);return onl(a,c)&&onl(b,c);}
void pkuassert(bool t){t=1/t;};
int dx[]={0,1,0,-1,1,1,-1,-1};
int dy[]={1,0,-1,0,-1,1,1,-1};
enum{TOP,BTM,LFT,RGT,FRT,BCK};
int dxdy2ce[]={RGT,FRT,LFT,BCK};
template<class T> T shift(T a,int b,int c,int d,int e){
 __typeof(a[0])t=a[b];a[b]=a[c];a[c]=a[d];a[d]=a[e];a[e]=t;
 return a;}
template<class T> T rgt(T a){return shift(a,TOP,LFT,BTM,RGT);}
template<class T> T lft(T a){return shift(a,TOP,RGT,BTM,LFT);}
template<class T> T frt(T a){return shift(a,TOP,BCK,BTM,FRT);}
template<class T> T bck(T a){return shift(a,TOP,FRT,BTM,BCK);}
line mkl(P a,P v){return line(a,a+v);}
FP lpdist(line a,P b){return abs(b-crspt(a,mkl(b,ortho(a))));}
FP spdist(line a,P b){
  P c(crspt(a,mkl(b,ortho(a))));
  return onl(a,c)?abs(b-c):min(abs(a.F-b),abs(a.S-b));
}
FP ssdist(line a,line b){
 return
  iscrs(a,b)?0.:
   min4(spdist(a,b.F),spdist(a,b.S),
        spdist(b,a.F),spdist(b,a.S));
}
namespace std{
  bool operator<(const P&a,const P&b){
    return mp(real(a),imag(a))<mp(real(b),imag(b));
  }
}

int main(int argc, char *argv[])
{
  int a,b;
  ofstream fout("out.txt");
  rep(i,9)rep(j,9) printf("%dx%d=%d\n",i+1,j+1,(i+1)*(j+1));
  fout << a+b << endl;
  return 0;
}