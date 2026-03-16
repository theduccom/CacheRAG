//Baseball Simulation
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  scanf("%d\n", &n);
  while(n--){
    int runner=0, out=0, score=0;
    while(true){
      string s;
      cin>>s;
      if(s=="HIT"){
        if(runner==3)score++;
        else runner++;
      }
      else if(s=="HOMERUN"){
        score+=(runner+1);
        runner=0;
      }
      else if(s=="OUT"){
        out++;
        if(out==3)break;
      }
    }
    cout<<score<<endl;
  }
  return 0;
}