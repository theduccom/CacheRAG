#include <iostream>
using namespace std;

int main(){
  int n;
  while(1){
    cin >> n;
    if(n==0)break;

    int x[15][15]={};
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
	cin >> x[i][j];
      }
    }
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
	x[i][n] += x[i][j];
	x[n][j] += x[i][j];
	x[n][n] += x[i][j];
      }
    }
    
    for(int i = 0; i <= n; i++){
      for(int j = 0; j <= n; j++){
	if(j < n){
	  cout.width(5);
	  cout << x[i][j];
	}
	if(j==n){
	  cout.width(5);
	  cout << x[i][j] << "\n";
	}
      }
    }
  }
  
  return 0;
}