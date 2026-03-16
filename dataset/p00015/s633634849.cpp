#include<deque>
#include<list>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
#include<sstream>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;
class N{
public:
  string s;
  int ln;
  N(){
  }
  N(int n){
    s.assign(n,'0');
    ln=n;
  }
  N(string t){
    s=t;
    ln=s.length();
    update();
  }
  N plus(const N& t){
    int i;
    N u(max(ln,t.ln)+1);
    int c=0;
    for(i=0;i<max(ln,t.ln);++i){  
      int p=(ln-i-1<0?0:s[ln-i-1]-'0')+(t.ln-i-1<0?0:t.s[t.ln-i-1]-'0')+c;
      u.s[u.ln-i-1]=p%10+'0';
      c=p/10;
    }
    u.s[u.ln-i-1]=c+'0';
    u.update();
    return u;
  }
  void update(){
    int i;
    for(i=0;i<ln-1&&s[i]=='0';++i);
    s.erase(0,i);
    ln-=i;
  }
};
int main(){
  int i;
  int n;
  cin>>n;
  for(i=0;i<n;++i){
    string s,t;
    cin>>s>>t;
    N a(s),b(t);
    N c=a.plus(b);
    if(c.ln>80)
      cout<<"overflow"<<endl;
    else
      cout<<c.s<<endl;
  }
  return 0;
}