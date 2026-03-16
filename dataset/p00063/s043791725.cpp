#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<bitset>
#include<utility>
#include<string>

using namespace std;

main(){
  int f,ans=0;
  string s;
  while(cin >> s){
    f=0;
    int sl=s.size();
    for(int i=0;i<sl/2+1;i++){
      if(s[i]!=s[sl-i-1]){
	f=1;
      }
    }
    if(f!=1){
      ans++;
    }
  }
  cout << ans <<endl;
}