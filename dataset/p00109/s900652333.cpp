#include <iostream>
#include <string>
#include<stack>

using namespace std;
string str;
int p;
 
int exp();
int factor();
int term();
 
int factor() {
  int num=0;
  while('0' <= str[p] && str[p] <= '9') {
    num*=10;
    num += str[p] - '0';
    p++;
  }
 
  if (str[p] == '('){
    p++;
    num = exp();
    p++;
  }

  return num;
}

int exp() {

  int sum=0,top=factor();
  

  while(str[p]!='=' && str[p]!=')') {
    if(str[p] == '+') {
      p++;
      sum+=top;
      top=factor();
    } else if(str[p] == '-'){
      p++;
      sum+=top;
      top=-factor();
    } else if(str[p] == '*'){
      p++;
      top*=factor();
    }else if(str[p] == '/'){
      p++;
      top/=factor();
    }
  }
  return sum+top;
}


/*
int exp() {

  
  stack<int> st;
  st.push(factor());

  while(str[p]!='=' && str[p]!=')') {
    if(str[p] == '+') {
      p++;
      st.push(factor());
    } else if(str[p] == '-'){
      p++;
      st.push(-factor());
    } else if(str[p] == '*'){
      p++;
      int k=st.top();
      st.pop();
      st.push(k*factor());
    }else if(str[p] == '/'){
      p++;
      int k=st.top();
      st.pop();
      st.push(k/factor()); 
    }
    
  }
 
  int sum=0;
  while(!st.empty()){
    sum+=st.top();
    st.pop();
  }
  return sum;
}
*/ 
int main() {
  int n;
 
  cin >> n;
   
  for(int i=0;i<n;i++) {
    p = 0;
  cin >> str;
  cout << exp() << endl;
  }
  return 0;
}