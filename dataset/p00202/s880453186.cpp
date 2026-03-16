#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
#define sosu 1000000
bool so[1000002];
int n,x,c[51];
bool his[1000002];
int ans;
queue <int> Q;
int count =0;

void hantei() {
  so[0] = so[1] = 1;
  for(int i=2;i*i<=1000001;i++) 
    if(so[i] == 0) 
      for(int j=2;j<=1000001/i;j++)so[i*j] = 1;
}

void saiki(int sum) {
  cout <<"count " << count++ << endl;
  his[sum] = 1;
  if(so[sum] == 0 && ans < sum) ans = sum;
   cout <<sum <<endl;
   
  for(int i=0;i<n;i++) 
    if(c[i]+sum <= x && his[c[i]+sum] == 0) 
      saiki(c[i]+sum);

}

void bfs() {
  
  Q.push(0);
  ans = 0;
  while(!Q.empty()) {
    //cout <<"count " << count++ << endl;
    int t = Q.front();
    Q.pop();
    if(his[t] == 1){
      //  cout << "err "<<t<<endl;
      continue;
    }
    his[t] = 1;
    //cout <<"t "<<  t << endl;
    
    if(ans < t && so[t] == 0) ans = t;
    
    for(int i=0;i<n;i++) 
      if(t+c[i] <= x &&  his[t+c[i]] == 0)
	Q.push(t+c[i]);
    
    
  } 
}



int main() {
  hantei();

  while(1){
    cin >> n >> x;
    if(n == 0 && x == 0) break;

    for(int i=0;i<n;i++) cin >> c[i];
    for(int i=0;i<=x+1;i++) his[i] = 0;
    
    ans = 0;
    //saiki(0);
       bfs();
    if(ans == 0) cout <<"NA"<<endl;
    else cout << ans << endl;
    
  }
  
  return 0;
}