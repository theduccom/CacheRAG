#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>
#include <stack>

using namespace std;
typedef long long LL;
static const double EPS = 1e-9;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n) 
int tenp(int n){
  int ret = 1;
  REP(i,n)
    ret *= 10;
  return ret;
}

int cal(){
  stack<int> st;
  int ope=0;
  int num;
  while(true){
    char c = getchar();
    if(c == '(' || ('0'<=c && c<= '9') ) {
      if(c == '(') num = cal();
      else{
        int dig=0;
        int numd[10]={0};
        numd[0] = (c - '0');
        while(true){
          c = getchar();
          if(!('0'<=c&&c<='9')) break;
          dig++;
          numd[dig] = (c - '0');
        }
        num = 0;
        for(int i=dig; i>=0; i--)
          num+=numd[dig-i] * tenp(i);
      }
      if(ope==0){
        st.push(num);
      }else if(ope == 1){
        st.push(-num);
        ope = 0;
      }else if(ope == 2){
        int tmp = st.top();
        st.pop();
        st.push(tmp * num);
        ope = 0;
      }else if(ope == 3){
        int tmp = st.top();
        st.pop();
        st.push(tmp / num);
        ope = 0;
      }
    }
    if(c == ')' ) break;
    if(c == '=' ){
      getchar();
      break;
    }
    if(c == '+') ope = 0;
    if(c == '-') ope = 1;
    if(c == '*') ope = 2;
    if(c == '/') ope = 3;
  }
  int sum=0;
  while(!st.empty()){
    sum += st.top();
    st.pop();
  }
  return sum;
}

int main(void){  
  int n;
  cin >> n;
  getchar();
  REP(i,n)
    cout << cal() << endl;
  return 0;
}