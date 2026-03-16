#include<iostream>
#include<string.h>
 
using namespace std;
 
bool p[50001];
int  cnt;
int  n;
 
void prime()
{
 
  for(int i = 2; i*i <= 50000; i++){
    if(!p[i]){
      for(int j = i*i; j <= 50000; j+=i){
        p[j] = true;
      }
    }
  }
  p[0] = p[1] = true;
}
 
int main(void)
{
 
  prime();
 
  while(cin >> n && n){
    cnt = 0;
    for(int i = 2; i <= n/2; i++){
      if(!p[i] && !p[n-i]){
        cnt++;
      }
    }
    cout << cnt << endl;
  }
 
  return 0;
}