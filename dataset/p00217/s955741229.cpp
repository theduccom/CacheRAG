#include <iostream>
using namespace std;
struct k{
  int bangou;
  int score;
};
int main(){
  int n;
  int d1,d2,b;
  k id[10001];
  while(  cin >> n,n ){
    for(int i = 0 ; i < n ; i++){
      cin >> b >> d1 >> d2;
      id[i].bangou = b;
      id[i].score = (d1 + d2);
    }
    int max = 0;
    int ans_b; 
    for(int i = 0 ; i < n ; i++){
      if(id[i].score > max){
	max = id[i].score;
	ans_b = id[i].bangou;
      }
    }
    cout << ans_b << " " << max << endl;
  }
  return 0;
}