#include <bits/stdc++.h>
using namespace std;

int main(void){
  int y1, y2;
  int ind = 0;
  while(1){
    cin >> y1 >> y2;
    if(!(y1 | y2)){
      break;
    }
    if(ind == 0){
      ind++;
    }else{
      cout << endl;
    }

    int cnt = 0;

    for(int i=y1; i <= y2; i++){
      if(i%4 == 0){
	if(i%100 == 0){
	  if(i%400 == 0){
	    cout << i << endl;
	    cnt++;
	    continue;
	  }else{
	    continue;
	  }
	}else{
	  cout << i << endl;
	  cnt++;
	}
      }else{
	continue;
      }
    }
    if(cnt == 0)
      cout << "NA" << endl;
  }
  return 0;
}