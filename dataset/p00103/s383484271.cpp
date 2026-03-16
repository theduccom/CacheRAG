#include <iostream>
#include <vector>

using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    int pcnt,rcnt,ocnt;
    pcnt = rcnt = ocnt = 0;
    while(ocnt < 3){
      char order[100];
      cin>>order;
      switch (order[1]){
      case 'I' : rcnt ++;break;
      case 'U' : ocnt ++;break;
      case 'O' : pcnt += rcnt + 1; rcnt = 0;break;
      }
      if(rcnt==4){
        rcnt --;
        pcnt ++;
      } 
//    cout<<pcnt<<" "<<rcnt<<endl;
    }
    cout<<pcnt<<endl;
  }
}