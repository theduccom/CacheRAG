#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int expr(string& s,int& i);//テ・ツシツ?
//<expr>::=<term>[('+'|'-')<term>]
int term(string& s,int& i);//テゥツ??
//<term>::=<factor> [(テ「ツ??テ「ツ?處テ「ツ??テ「ツ??<factor>]*
int factor (string& s,int& i);//テ・ツ崢?ヲツ閉ー
//<factor>::=<number>|テ「ツ??テ「ツ??expr>テ「ツ??テ「ツ??
int number(string& s,int& i);//テヲツ閉ー
//<number>::=テ」ツ?ェテ」ツつ禿」ツ??

int number(string& s,int& i){
  int num = s[i]-'0';
  i++;
  while(isdigit(s[i])){
    num = num*10+s[i]-'0';
    i++;
  }
  return num;
}

int factor(string& s,int& i){
  if(isdigit(s[i])) return number(s,i);

  i++;
  int res=expr(s,i);
  i++;
  return res;
}

int term(string& s,int& i){
  int val1=factor(s,i);
  while(s[i]=='*'||s[i]=='/'){
    char op=s[i];
    i++;
    int val2=factor(s,i);
    if(op=='*'){
      val1 =val1*val2;
    }
    else{
      val1=val1/val2;
    }
  }
  return val1;
}

int expr(string& s,int& i){
  int val1=term(s,i);
  while(s[i]=='+'||s[i]=='-'){
    char op=s[i];
    i++;
    int val2=term(s,i);
    if(op=='+'){
      val1 =val1+val2;
    }
    else{
      val1=val1-val2;
    }
  }
  return val1;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  for(int k=0;k<n;k++){
    string s;
    cin >> s;
    int i=0;
    cout << expr(s,i) << endl;
  }
}