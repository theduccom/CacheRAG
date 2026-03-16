#include <iostream>
using namespace std;

main(){
  int i,j,min[3],ans;
  char a[102];
  while(cin >> a){
    ans = 0;
    for(i=0;i<3;i++) min[i] = 0;

    for(i=0;i<102;i++){
      if(a[i] == '\0') break;
      else if(a[i] == 'I'){
	min[0]++;
	ans++;
      }
      else if(a[i] == 'V'){
	ans += 5;
	if(min[0] != 0){
	  ans -= min[0] * 2;
	  min[0] = 0;
	}
      }
      else if(a[i] == 'X'){
	ans += 10;
	if(min[0] != 0){
	  ans -= min[0] * 2;
	  min[0] = 0;
	}
	min[1]++;
      }
      else if(a[i] == 'L'){
	ans += 50;
	if(min[1] != 0){
	  ans -= min[1] * 20;
	  min[1] = 0;
	}
      }
      else if(a[i] == 'C'){
	ans += 100;
	if(min[1] != 0){
	  ans -= min[1] * 20;
	  min[1] = 0;
	}
	min[2]++;
      }
      else if(a[i] == 'D'){
	ans += 500;
	if(min[2] != 0){
	  ans -= min[2] * 200;
	  min[2] = 0;
	}
      }
     else if(a[i] == 'M'){
	ans += 1000;
	if(min[2] != 0){
	  ans -= min[2] * 200;
	  min[2] = 0;
	}
      }
    }

    cout << ans << endl;
  }

  return 0;
}