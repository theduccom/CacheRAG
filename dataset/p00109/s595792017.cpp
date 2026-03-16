#include<iostream>
#include<sstream>

using namespace std;

bool isnum(string s){
  for(int i = 0; i < s.length(); i++)
    if('0' > s[i] || s[i] > '9') return false;
  
  return true;
}

int solve(string s){

  // cout << s << endl;

  // if(s[0] == '-') return -1*solve(s.substr(1));
  if(isnum(s)){
    stringstream ss(s);
    int tmp;
    ss >> tmp;
    return tmp;
    
  }else{
    int para = 0;

    for(int i = s.length()-1; i >= 0; i--){
      if(s[i] == '(') para++;
      if(s[i] == ')') para--;

      if((s[i] == '+' || s[i] == '-') && para == 0 && i)
	if(s[i] == '+') return solve(s.substr(0,i))+solve(s.substr(i+1));
	else return solve(s.substr(0,i))-solve(s.substr(i+1));
    }

    para = 0;

    for(int i = s.length()-1; i >= 0; i--){
      if(s[i] == '(') para++;
      if(s[i] == ')') para--;
      
      if((s[i] == '*' || s[i] == '/') && para == 0 && i)
	if(s[i] == '*') return solve(s.substr(0,i))*solve(s.substr(i+1));
	else return solve(s.substr(0,i))/solve(s.substr(i+1));
    }

    if(s[0] == '(' && s[s.length()-1] == ')')
      return solve(s.substr(1,s.length()-2));
  }
}

int main(){
  int n;
  cin >> n;
  while(n--){
    string s;
    cin >> s;
    if(s[0] == '-') cout << solve("0"+s.substr(0,s.length()-1)) << endl;
    else cout << solve(s.substr(0,s.length()-1)) << endl;
  }
  return 0;
}