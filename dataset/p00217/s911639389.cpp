#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct patient{
  int p, d, dd;
  bool operator<(const patient &p)const{
    return d + dd < p.d + p.dd;
  }
  bool operator>(const patient &p)const{
    return d + dd > p.d + p.dd;
  }
};


int main(int argc, char *argv[]){
  int n;
  while(std::cin >> n, n){
    vector<patient> vp;
    for (int i = 0; i < n; i++) {
      patient p;
      std::cin >> p.p >> p.d >> p.dd;
      vp.push_back(p);
    }
    sort(vp.begin(), vp.end(), greater<patient>());
    std::cout << vp[0].p << " " << vp[0].d + vp[0].dd << std::endl;
  }
  return 0;
}