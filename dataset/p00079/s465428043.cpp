#include <iostream>
#include <cstdio>
#include <vector>
#include <complex>
#include <cmath>
using namespace std;
using xy_t = complex<double>;

int main(){
  vector<xy_t> V;
  double x_in, y_in;
  while(scanf("%lf,%lf", &x_in, &y_in) != EOF){
    V.push_back(xy_t(x_in, y_in));
  }
  int n = V.size();
  double sum = 0.0;
  for(int i=1;i<n-1;i++){
    xy_t vec[2] = {V[i] - V[0], V[i+1] - V[0]};
    sum += abs((conj(vec[0]) * vec[1]).imag() * 0.5);
  }
  cout << sum << endl;
}
