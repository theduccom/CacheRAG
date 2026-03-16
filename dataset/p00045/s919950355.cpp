#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <stack>
using namespace std;
int main(){
  map<double,double> m;
  double a,b,ave=0,sum=0;
  while(scanf("%lf,%lf",&a,&b)!=EOF){
    m[a]=b;
  }
  map<double,double>::iterator it = m.begin();
  while(it!=m.end()){
    ave+=(*it).second,sum+=((*it).first*(*it).second);
    it++;
  }
  ave/=m.size();
  ave+=0.5;
  cout<<sum<<endl<<(int)ave<<endl;
}