#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
long long int st[4444];
int stf[4444];
int main(void)
{
  while(1){
    int n;
    bool f = true;
    cin >> n;
    if(!n) break;
    memset(st,0,sizeof(st));
    memset(stf,0,sizeof(stf));
    for(int i = 0; i < n; i++){
      long long int a,b,c;
      cin >> a >> b >> c;
      st[a] += b * c;
      if(1000000 <= st[a] && !stf[a]){
	cout << a << endl;
	stf[a] = 1;
	f = false;
      }
    }
    if(f) puts("NA");
  }
}