#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  int j = 0;
  while(1){
    cin >> a >> b;
    if( !a && !b){
      break;
    }
    if(j != 0) cout << endl;
    int cnt = 0;
    for(int i = a; i <= b; i++){

      if(i%4 == 0){
	if(i%400 == 0){
	  cout << i << endl;
	  cnt++;
	}
	else if(i%100 != 0){
	  cnt++;
	  cout << i << endl;
	}
      }
    }
    if(cnt == 0) cout << "NA" << endl;
    j = 1;




  }

}