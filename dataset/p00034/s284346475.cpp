#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int l[11],v1,v2;
  double time1[11],time2[11];
  while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&l[10],&v1,&v2) == 12) {
    //for(int i=1;i<11;i++) {
    //cout << l[i] << endl;}
    double time1[11] = {0};
    double time2[11] = {0};
    for(int i=1;i<11;i++) {
      for(int j=0;j<i;j++) {
        time1[i] += ((double)l[j+1]) / v1;
        time2[10-i] += ((double)l[10-j]) / v2;
      }
      //  cout << time1[i] << " " << time2[10-i] << endl;
    }


        for(int i=0;i<10;i++) {
    if((time1[i] < time2[i]) && (time1[i+1] > time2[i+1]))
        cout << i+1 << endl;
    else if(time1[i] == time2[i])
      cout << i << endl;
    }
  }
}