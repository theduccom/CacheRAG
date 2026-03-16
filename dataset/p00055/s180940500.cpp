#include <iostream>
#include <iomanip>
#define MAX 30
using namespace std;


int main(){

  double ft; //ft:first term
  double sum = 0;
  while (cin >> ft){

    for(int i=0;i<10;i++){

      if(i==0){
      }
      else if(i%2==1){ //偶数
        ft = ft*2;
      }
      else if(i%2==0){ //奇数
        ft = ft/3;
      }
      sum+=ft;
    }
    cout << setprecision(10) << sum << endl;

    sum=0;
  }

 return 0;
}