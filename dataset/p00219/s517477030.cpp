#include <iostream>
using namespace std;

int main(){

  int n;
  while(cin >> n && n != 0){
    int x[11] ={};
    for(int i = 0; i < n; i++){
      int tmp;
      cin >> tmp;
      x[tmp]++;
    }
    for(int i = 0; i < 10; i++){
      if(x[i] == 0) cout << "-" << endl;
      else{
	//	cout << x[i] << " ";
	for(int j = 0; j < x[i]; j++){
	  cout << "*";
	}
	cout << endl;
      }
    }
  }


}