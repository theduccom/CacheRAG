#include<bits/stdc++.h>
using namespace std;
int main(){
  double a[3],b,n;
  cin >> a[0] >> a[1] >> a[2];
  while(a[0] != 0 && a[1] != 0 && a[2] != 0){
    sort(a,a+3);
    cin >> n;
    for(int i = 0;i < n;i++){
      cin >> b;
      if(a[1] > b+b) cout << "NA" << endl;
      else if( pow(b+b,2) > pow(a[0],2)+pow(a[1],2)) cout << "OK" << endl;
      else cout << "NA" << endl;
    }
    cin >> a[0] >> a[1] >> a[2];
  }
  return (0);
}