#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
bool s[55555];

void sosuu(int n){
  memset(s,true,sizeof(s));
  s[0] = s[1] = false;
  for(int i = 2; i*i <= n; i++){
    if(!s[i]) continue;
    for(int j = i*2; j <= n; j += i){
      s[j] = false;
    }
  }
}

int main(void)
{
  sosuu(50005);
  while(1){
    int n;
    cin >> n;
    if(!n) break;

    int ret = 0;
    for(int i = 2; i <= n / 2; i++){
      if(s[i] && s[n-i]) ret++;
    }
    cout << ret << endl;
  }
}