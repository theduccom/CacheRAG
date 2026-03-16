#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  while(1){

    cin >> n;
    if(n==0) break;
    int ans[10]={};
    for(int i=0;i<n;i++){
      int tmp;
      cin >> tmp;
      ans[tmp]++;
    }
    for(int i=0;i<10;i++){
      if(ans[i] == 0){
	cout <<"-\n";
	continue;
      }
      else{
	for(int j=0;j<ans[i];j++){
	  cout <<"*";
	}
	cout << "\n";
      }
    }

  }
}