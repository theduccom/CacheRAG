#include<iostream>
using namespace std;

#define N 16

int main()
{
  while(true){
    int n;
    cin >> n;
    if ( n == 0 ) break;
    int ice[N]={0,};
    for(int i = 0; i < n; ++i){
      int t;
      cin >> t;
      ice[t]++;
    }
    for(int i = 0; i < 10; ++i){
      if( ice[i] > 0 ){
	for(int j = 0; j < ice[i];  ++j){
	  cout << '*';
	}
	cout << endl;
      }else{
	cout << '-' << endl;
      }
    }
  }
  return 0;
}