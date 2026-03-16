#include<cstdio>
bool dp[1000001];
bool isprime(int& x){
  if(x > 2 && x % 2 == 0) return true;
  for(int i = 3 ; i * i <= x ; i += 2 ) if( x % i == 0) return true;
  return x == 1;
}
int solve(int& i){
  while(true){
    if(dp[i] && !isprime(i)) return i;
    i--;
  }
}
int main(){
  int n,x,data,ans;
  dp[0] = true;
  while(scanf("%d %d",&n,&x) , n){
    for(int i = 1 ; i <= x ; i++ ) dp[i] = false;
    for(int i = 0 ; i < n ; i++ ){
      scanf("%d",&data);
      for(int i = data ; i <= x ; i++ ) if(dp[i-data]) dp[i] = true;
    }
    if(ans = solve(x)) printf("%d\n",ans);
    else printf("NA\n");
  }
}