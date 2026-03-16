#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

  double a[5],d,c;
  int n;

  while(cin >> a[0] >> a[1] >> a[2], a[0], a[1], a[2]){
    cin >> n;

    sort(a,a+3);

    c = sqrt(a[0]*a[0] + a[1]*a[1]);

    for(int i=0;i<n;i++){
      cin >> d;

      if(2*d > c) cout << "OK" << endl;
      else cout << "NA" << endl;

    }
  }
}