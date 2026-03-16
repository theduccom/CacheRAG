#include <iostream>
#include <cmath>

using namespace std;

int check(double xa,double ya,double ra,double xb,double yb,double rb){
  double dist = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
  double minr = min(ra,rb);
  if(ra+rb<dist){
    return 0;
  }else{
    if(ra>rb&&dist<ra-rb){
      return 2;
    }else if(ra<rb&&dist<rb-ra){
      return -2;
    }else{
      return 1;
    }
  }
}

int main(){
  int N;
  cin >> N;
  for(int i=0;i<N;++i){
    double xa,ya,ra,xb,yb,rb;
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    cout << check(xa,ya,ra,xb,yb,rb) << endl;
  }
}