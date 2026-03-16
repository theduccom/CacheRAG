#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int i,j,n,a[10];
  while(cin >> n){
    for(i=0;i<10;i++){
      a[i] = 0;
    }

    for(i=9;i>=0;i--){
      if(n >= pow(2,(double)i)){
	n -= (int)pow(2,(double)i);
	a[i++]++;
      }
    }

    
    for(i=0;i<10;i++){
      if(a[i] > 0){
	cout << pow(2,(double)i);
	a[i]--;
	break;
      }
    }
    
    for(i=0;i<10;i++){
      for(j=0;j<a[i];j++){
	cout << " " << pow(2,(double)i);
      }
    }
    cout << endl;

  }
  return 0;
}