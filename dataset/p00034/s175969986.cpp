#include <iostream>
using namespace std;
int main(){
  int a,v1,v2,sum[10];
  char c;
  while(cin >> a >> c){
    sum[0] = a;
    for(int i = 1 ; i < 10 ; i++ ){
      cin >> a >> c;
      sum[i] = a + sum[i - 1];
    }
    cin >> v1 >> c >> v2;
     
    double t = ((double)v1/(v1 + v2))*sum[9];
    for(int i = 0 ; i < 10 ; i++ ){
      if(t <= sum[i] ){
    cout << i + 1 << endl;
    break;
      }
    }
  }
  return 0;
}