#include <bits/stdc++.h>
using namespace std;

vector<pair<double, double> > v;
pair<double, double> s, ss, p;
vector<pair<double, pair<int, int> > > vv, vvv;
double sum;


void l(){
  for(int i = 1; i < v.size(); i++){
    double x = abs(v[0].first-v[i].first), y = abs(v[i].second-v[0].second);
    vv.push_back(make_pair(sqrt((x*x)+(y*y)),make_pair(0,i)));
  }
}

void ll(){

  for(int i = 1; i <= v.size()-2; i++){
    double x = abs(v[i+1].first-v[i].first), y = abs(v[i+1].second-v[i].second);
    vvv.push_back(make_pair(sqrt((x*x)+(y*y)),make_pair(i,i+1)));
  }

}

double solve(){

  for(int i = 1; i <= v.size()-2; i++){
    double z = (vv[i].first+vv[i-1].first+vvv[i-1].first)/2;
    double a = vv[i].first, b = vv[i-1].first, c = vvv[i-1].first;
    sum += sqrt(z*(z-a)*(z-b)*(z-c));
    //cout << sum;
  }
  printf("%.6f\n",sum);

}


int main(){

  char n;
  while(cin >> p.first >> n>> p.second){
      v.push_back(p);
  }
  l();
  ll();
  solve();

  
  /* for(int i = 0; i < vvv.size(); i++){
    cout << vvv[i].first << " " << vvv[i].second.first << " " << vvv[i].second.second << endl;
  */
}
  