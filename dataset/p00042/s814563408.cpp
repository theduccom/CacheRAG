#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cstdio>
#include <numeric>
using namespace std;
int main(){
  for(int tc = 1;; ++tc){
    int W;
    cin >> W;
    if(W == 0){
      break;
    }
    int n;
    cin >> n;
    int value[n], weight[n];
    for(int i = 0; i < n; ++i){
      scanf("%d,%d", &value[i], &weight[i]);
    }
    int table[n+1][W+1];    
    fill_n((int*)table, (n+1)*(W+1), 0);
    table[0][0] = 0; 
    for(int i = 0, j = 1; i < n; ++i, ++j){
      for(int w = 0; w <= W; ++w){
	if(table[i][w] != -1){
	  table[j][w] = table[i][w];
	}
      }
      for(int w = weight[i]; w <= W; ++w){
	int tmp = w - weight[i];
	if(table[i][tmp] >= 0){
	  table[j][w] = max(table[j][w], table[i][tmp] + value[i]);
	}
      }    
    }
    int ans_w = 0, ans_v = 0;
    for(int w = 0; w <= W; ++w){
      if(ans_v < table[n][w]){
	ans_v = table[n][w];
	ans_w = w;
      }
    }
    cout << "Case " << tc << ":" << endl;
    cout << ans_v << endl;
    cout << ans_w << endl;
  }
  return 0;
}