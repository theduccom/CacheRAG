#include<iostream>
#include<cstring>

using namespace std;

const int MAX_w = 1000;
const int MAX_v = 1000;

int dp[MAX_w + 1][MAX_v + 1];


int n, wet ;
int w[MAX_w], v[MAX_v];

// i番目以降の品物から重さの和がj以下なるように選んだときの、
// 取りうる価値の総和の最大値を返す関数
int rec(int i, int j) {
  int res;
  if(dp[i][j] != -1){
  	
	return dp[i][j];
  }

  if (i == n) {
    // 品物がもう残っていないときは、価値の和の最大値は0で確定
    res = 0;
  } else if (j < w[i]) {
    // 残りの容量が足りず品物iを入れられないので、入れないパターンだけ処理
    // i+1 以降の品物のみを使ったときの最大値をそのままこの場合の最大値にする
    res = rec(i + 1, j);
  } else {
    // 品物iを入れるか入れないか選べるので、両方試して価値の和が大きい方を選ぶ
    res = max(
        rec(i + 1, j),
        rec(i + 1, j - w[i]) + v[i]
    );
  }

  return dp[i][j] = res;
}

void solve(int ca) {
  // 0番目以降で容量W以下の場合の結果を表示する
  int wmin;
  
  memset(dp, -1, sizeof(dp));
  
  cout << "Case" << " " << ca << ":" <<endl; 
  
  int ans =  rec(0, wet) ;
  cout << ans << endl;
  
  for (int w = wet -1 ; w>=0 ; w--){
  	if( ans != rec(0,w)){
		 wmin = w+1;
		 break;
  	}
  }
  
  cout << wmin << endl;  
  
}


int main(){
	
	char x;
	int ca = 0;
	
	while(1){
			
		ca++;
		cin >> wet;
		if(wet == 0 ) break;
		cin >> n;
		
		for(int i = 0 ;  i<n ; i++){
			
			cin >> v[i] >> x >> w[i];
		}
		
		
		 solve(ca);
		
	}
	
	return 0;
	
} 