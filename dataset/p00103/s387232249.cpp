#include <iostream>
using namespace std;

int main(){
  int T;
  cin>>T;

  while(T--){
    string s;
    int ans = 0;
    int out = 0;
    bool first=false,second=false,third=false;

    while(cin>>s){
      if(s == "HIT"){
        if(third) ans++;
        third = second;
        second = first;
        first = true;
      }
      else if(s == "OUT"){
        out++;
        if(out == 3) break;
      }
      else{
        ans += first + second + third + 1;
        first = second = third = false;
      }
    }

    cout<<ans<<endl;
  }
}