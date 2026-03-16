#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int a,b;
  int cnt = -1;
  while(cin >> a >> b){
    if(a==0 && b==0){
      break;
    }

    if(cnt >= 0){
      cout << endl;
    }
    cnt = 0;

    for(int i = (a-1)/4+1;i < b/4+1;i++){
      if(i%25==0 && i%100!=0){
	continue;
      }
      else{
	cout << i*4 << endl;
	cnt++;
      }
    }
    if(!cnt){
      cout << "NA" << endl;
    }
    //    cout << a << " " << b << endl;
  }
}