#include<iostream>
using namespace std;

int main(){

  int a, b, valid, cnt;

  cnt = 0;
  while(cin >> a >> b){
    if(a == 0 && b == 0) break;
    valid = 0;
    if(cnt != 0) cout << endl;
    
    for(int i=a; i<=b; i++){
      if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)){
        cout << i << endl;
        valid = 1;
      }
    }

    if(valid == 0) cout << "NA" << endl;
    cnt++;

  }

  return 0;

}