#include<iostream>
#include<complex>
#include<cmath>
#include<map>
#define fs first
#define sc second
#define EPS 0
using namespace std;


typedef complex<double> P;
typedef pair<P,double> C;

int cpr(C a,C b){
  double d = abs(a.fs-b.fs);
  if(a.sc+b.sc + EPS < d)return -1;      //no intersection (outside)
  if(b.sc<a.sc && d + EPS < a.sc-b.sc)return 1;       //no intersection (inside,B in A)
  if(a.sc<b.sc && d + EPS < b.sc-a.sc)return 2;       //no intersection (inside,A in B)
  if(abs(a.sc+b.sc - d) < EPS)return -3; //one cross point (outside)
  if(abs(b.sc+d - a.sc) < EPS)return 3;  //one cross point (inside,B in A)
  if(abs(a.sc+d - b.sc) < EPS)return 4;  //one cross point (inside,A in B)
  return 0;                              //two cross point
}


int main(){
  double ax,ay,ar,bx,by,br;

  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin>> ax >> ay >> ar >> bx >> by >> br;
    C a = C(P(ax,ay),ar), b = C(P(bx,by),br);
    int v = cpr(a,b);
    if(v==-1)cout <<  0 << endl;
    else if(v==1)cout << 2 << endl;
    else if(v==2)cout << -2 << endl;
    else cout << 1 << endl;
  }
}