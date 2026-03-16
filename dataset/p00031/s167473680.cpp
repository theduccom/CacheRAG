#include <iostream>
using namespace std;

int main(void){
  int x;

  while(cin>>x){
    bool firstFlg = true;
    int pow = 1;

    while(x != 0){
      if(x % 2 == 1){
        if(firstFlg) firstFlg = false;
        else cout<<" ";
        cout<<pow;
      }

      x /= 2;
      pow *= 2;
    }

    cout<<endl;
  }

  return 0;
}