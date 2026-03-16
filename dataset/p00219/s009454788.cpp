#include<iostream>
#define _w_ true
using namespace std;

int main(){
  int n,aizu[20],in;
 
  while(_w_){
    cin >> n;
    if(n == 0)break;
 for(int i=0;i<20;i++)aizu[i]=0;
    while(n-- > 0){
      cin >> in;
      aizu[in]++;
    }
    for(int i=0;i<=9;i++){
      if(aizu[i] == 0)cout << "-" << endl;
      else {
	for(int j=0;j<aizu[i];j++){
	  cout << "*";
	}
	cout << endl;
      }
    }


  }
  return 0;
}