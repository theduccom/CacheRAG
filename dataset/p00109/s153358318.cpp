#include <iostream>
using namespace std;

typedef int Val;
typedef pair<Val,int> Res;
#define val first
#define idx second

Res readExpr(string &s, int idx);
Res readTerm(string &s, int idx);
Res readFctr(string &s, int idx);

Res readQuery(string &s, int idx){
  //cout << "Q[";
  Res r = readExpr(s, idx);
  // skip '=';
  //cout << "]";
  return r;
}
Res readExpr(string &s, int idx){
  //cout << "E[";
  Res r = readTerm(s, idx);
  while (s[r.idx]=='+' || s[r.idx]=='-'){
    Res r2 = readTerm(s, r.idx+1);
    if (s[r.idx]=='+') r.val += r2.val;
    else r.val -= r2.val;
    r.idx = r2.idx;
  }
  //cout << "]";
  return r;
}
Res readTerm(string &s, int idx){
  //cout << "T[";
  Res r = readFctr(s, idx);
  while (s[r.idx]=='*' || s[r.idx]=='/'){
    Res r2 = readFctr(s, r.idx+1);
    if (s[r.idx]=='*') r.val *= r2.val;
    else r.val /= r2.val;
    r.idx = r2.idx;
  }
  //cout << "]";
  return r;
}
Res readFctr(string &s, int idx){
  Res r;
  //cout << "F[";
  if (s[idx]=='('){
    r = readExpr(s, idx+1);
    r.idx++; // skip ')'
  } else {
    int sgn=1,num=0;
    if (s[idx]=='-'){
      sgn=-1;
      idx++;
    }
    while (s[idx]>='0'&&s[idx]<='9'){
      num = num*10 + (s[idx]-'0');
      idx++;
    }
    r.val = num*sgn; r.idx = idx;
  }
  //cout<<"]";
  return r;
}

int main(void){
  int n;
  cin >> n;
  for (int i=0; i<n; i++){
    string str; cin >> str;
    cout << readQuery(str,0).val << endl;
  }
  return 0;
}

