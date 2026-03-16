#include<iostream>

using namespace std;

const int MAX_W = 1001;
const int MAX_T = 1001;

int dp[MAX_T][MAX_W];

void init(){
  for(int i = 0; i < MAX_T; i++){
    fill(dp[i],dp[i]+MAX_W,0);
  }
}

int main(){
  int rev = 0, max;
  while(cin >> max && max){
    rev++;
    init();
    int num;
    cin >> num;
    for(int i = 1; i <= num; i++){
      char trash;
      int price, weight;
      cin >> price >> trash >> weight;
      for(int j = 0; j <= max; j++){
	if(weight <= j){
	  dp[i][j] = price + dp[i-1][j-weight];
	}
	if(dp[i][j] < dp[i-1][j]) dp[i][j] = dp[i-1][j];
      }
    }
    int ablep = 0, ablew = 0;
    for(int i = 0; i <= num; i++){
      for(int j = 0; j <= max; j++){
	if(ablep < dp[i][j]){
	  ablep = dp[i][j];
	  ablew = j;
	}else if(ablep == dp[i][j]){
	  if(ablew > j) ablew = j;
	}
      }
    }
    cout << "Case " << rev << ":" << endl;
    cout << ablep << endl << ablew << endl;

  }
  return 0;
}