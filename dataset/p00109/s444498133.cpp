#include<iostream>
#include<vector>
using namespace std;

bool digit(char c){
  return (c-'0'>=0 && c-'0'<=9);
}

int stoi(string s){
  int res,tmp;
  res = 0;
  tmp = 1;
  for(int i=(int)s.size()-1;i>=0;i--){
    res += (s[i]-'0') * tmp;
    tmp *= 10;
  }
  return res;
}

int cal(string s){
  vector<int> v,op;
  int pos = 0;
  while(pos<(int)s.size()){
    if(s[pos] == '('){
      int c = 1;
      string tmp;
      while(1){
	pos++;
	if(s[pos] == '(')c++;
	if(s[pos] == ')')c--;
      if(!c)break;
      tmp.push_back(s[pos]);
      }
      v.push_back(cal(tmp));
      pos++;
    }else if(digit(s[pos])){
      string tmp;
      while(digit(s[pos])){
	tmp.push_back(s[pos]);
	pos++;
      }
      v.push_back(stoi(tmp));
    }else{
      op.push_back(s[pos]);
      pos++;
    }
  }
    
  for(int i=0;i<(int)op.size();i++){
    if(op[i] == '*'){
      int tmp = v[i]*v[i+1];
      v.insert(v.begin()+i,tmp);
      v.erase(v.begin()+i+1);
      v.erase(v.begin()+i+1);
      op.erase(op.begin()+i);
      i = - 1;
    }
    if(op[i] == '/'){
      int tmp = v[i]/v[i+1];
      v.insert(v.begin()+i,tmp);
      v.erase(v.begin()+i+1);
      v.erase(v.begin()+i+1);
      op.erase(op.begin()+i);
      i = - 1;
    }
  }
  for(int i=0;i<(int)op.size();i++){
    if(op[i] == '+'){
      int tmp = v[i]+v[i+1];
      v.insert(v.begin()+i,tmp);
      v.erase(v.begin()+i+1);
      v.erase(v.begin()+i+1);
      op.erase(op.begin()+i);
      i = - 1;
    }
    if(op[i] == '-'){
      int tmp = v[i]-v[i+1];
      v.insert(v.begin()+i,tmp);
      v.erase(v.begin()+i+1);
      v.erase(v.begin()+i+1);
      op.erase(op.begin()+i);
      i = - 1;
    }
  }
  return v[0]; 
}

int main(){
  string s;
  int n;

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> s;
    s.erase(s.end()-1);
    cout << cal(s) << endl;
  }
}