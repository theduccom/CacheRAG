#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
  double w[3];
  while(cin >> w[0] >> w[1] >> w[2] && w[0]){
    sort(w,w+3);
    double R = sqrt((w[0]*w[0]+w[1]*w[1])/4);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
      double r;
      cin >> r;
      cout << (R<r?"OK":"NA") << endl;
    }
  }
}