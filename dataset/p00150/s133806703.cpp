#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool is_p[1000000];

void erast(int n, vector<int> &p){
  is_p[0] = is_p[1] = 1;
  p.push_back(1);
  for (int i = 2; i <= n; i++) {
    if(is_p[i] == 1)continue;
    is_p[i] = 1;
    p.push_back(i);
    for (int j = 2*i; j <= n; j += i) {
      is_p[j] = 1;
    }
  }
}
  
int main(int argc, char *argv[]){
  int n;
  while(cin >> n, n){
    memset(is_p, 0, sizeof(is_p));
    vector<int> p;
    erast(n, p);
    for (int i = p.size() - 1; i > 0; i--) {
      if(p[i] - p[i - 1] == 2){
        std::cout << p[i - 1] << " " << p[i] << std::endl;
        break;
      }
    }
  }
  return 0;
}