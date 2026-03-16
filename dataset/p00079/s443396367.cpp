#include<bits/stdc++.h>
using namespace std;

typedef pair<double,double> dd;


double len(dd a, dd b){
  return sqrt(pow(a.first-b.first , 2)+pow(a.second-b.second,2));
}


int main(){

  vector < dd > dat(0);
  double x,y;
  double s=0,z;

  while(scanf("%lf,%lf",&x,&y)!=EOF){
    dat.push_back(dd(x,y));
  }

  for(int i=2; i<(int)dat.size(); i++){ 
    z = (len(dat[0],dat[i])+len(dat[i],dat[i-1])+len(dat[i-1],dat[0]) )/2.0;
    s += sqrt(z*(z-len(dat[0],dat[i]))*(z-len(dat[i],dat[i-1]))*(z-len(dat[i-1],dat[0])));
  }

  cout << s << endl;

  return 0;
}