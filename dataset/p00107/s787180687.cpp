#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
  int n;

  while(1) {
    vector<float> che(3, 0);
    cin >> che[0] >> che[1] >> che[2];
    if(che[0] == 0.0 && che[1] == 0.0 && che[2] == 0.0) break;
    cin >> n;

    sort(che.begin(), che.end());

    int r[10000] = {0};
    for(int i = 0; i < n; i++) {
      cin >> r[i];
      if((r[i]*r[i]*4) > ((che[0]*che[0])+(che[1]*che[1])))
        cout <<	"OK" <<	endl;
      else
        cout <<	"NA" <<	endl;
    }
    che.clear();
  }
  return 0;
}

