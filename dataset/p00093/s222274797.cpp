#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
 

int main() {
  int a,b;
  int s = 0;
  while(cin>>a>>b,a+b) {
    int f = 0;
    if (s)
      cout << endl;
    else
      s++;
    for(int i=a;i<=b;i++) {
      if (i%4==0&&i%100!=0 || i%400==0) {
        cout << i << endl;
        f++;
      }
    }
    if (f==0) cout << "NA" << endl;
  }
}
