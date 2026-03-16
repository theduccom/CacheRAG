#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int n;
  double x1,y1,x2,y2,x3,y3;
  cin>>n;
  for(int i=0;cin>>x1>>y1>>x2>>y2>>x3>>y3||i<n;i++){
    double X,Y,L;
    X= ((y2-y1)*(x1*x1-x3*x3+y1*y1-y3*y3)-(y3-y1)*(x1*x1-x2*x2+y1*y1-y2*y2))/
      (2*(x2-x1)*(y3-y1)-2*(y2-y1)*(x3-x1));
    Y= ((x3-x1)*(x1*x1-x2*x2+y1*y1-y2*y2)-(x2-x1)*(x1*x1-x3*x3+y1*y1-y3*y3))/
      (2*(x2-x1)*(y3-y1)-2*(y2-y1)*(x3-x1));
    L= sqrt((X-x1)*(X-x1)+(Y-y1)*(Y-y1));
    cout<<fixed<<setprecision(3)<<X<<" "<<Y<<" "<<L<<endl;
  }
  return 0;
}