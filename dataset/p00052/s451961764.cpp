#include <iostream>
using namespace std;
int main(){
  int n;
  while( cin >> n,n ){
    int res = 0;
    while(n){
      res += n/=5;
    }
    cout << res << endl;
  }
}