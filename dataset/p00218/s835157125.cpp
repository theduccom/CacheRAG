#include <iostream>
using namespace std;


int main(){
  int n;
  while(1){
    cin >> n;
    if(n == 0) break;
    for(int i=0;i<n;i++){
      int su,ei,ko;
      cin >> su >> ei >> ko;

      if(su == 100 || ei == 100 || ko == 100){
	cout << "A\n";
	continue; 
      }
      if((double)(su + ei)/2.0 >= 90.0){
	cout << "A\n";
	continue; 
      }
      if((double)(su + ei + ko)/3.0 >= 80.0){
	cout << "A\n";
	continue; 
      }
      if((double)(su + ei + ko)/3.0 >= 70.0){
	cout << "B\n";
	continue; 
      }
      if((double)(su + ei + ko)/3.0 >= 50.0 && (su >=80 || ei >= 80) ){
	cout << "B\n";
	continue; 
      }
      cout << "C\n";
    }


  }



}