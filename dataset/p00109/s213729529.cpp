#include<iostream>
#include<string>
#include<stack>
#include<sstream>
#include<vector>
using namespace std;
int main(){
  stringstream ss;
  int n;
  string line;
  for(cin>>n;n>0;n--){
    ss.str("");
    ss.clear(stringstream::goodbit);
    cin>>line;
    vector<int> form,f_nums;
    vector<char> f_signs;
    if(line[0]=='-')line = "0"+line;
    ss<<line;
    stack<char> sg;
    int num;
    char sign;
    for(int i=0;i<line.size();i++){
      if('0'<=ss.str()[i]&&ss.str()[i]<='9'){
	ss>>num;
	for(int d=10;d<=num;i++)d*=10;
	f_nums.push_back(num);
	form.push_back(f_nums.size()-1);
      }
      else{
	ss>>sign;
	if(sign=='=')break;
	if(sign==')'){
	  while(sg.top()!='('){
	    f_signs.push_back(sg.top());
	    form.push_back(-f_signs.size());
	    sg.pop();
	  }
	  sg.pop();
	}
	else{
	  if(sign!='('){
	    while(!sg.empty()&&sg.top()!='('&&((sign=='+'||sign=='-')||(sg.top()=='*'||sg.top()=='/'))){
	      f_signs.push_back(sg.top());
	      form.push_back(-f_signs.size());
	      sg.pop();
	    }
	  }
	  sg.push(sign);
	}
      }
    }
    while(!sg.empty()){
      f_signs.push_back(sg.top());
      form.push_back(-f_signs.size());
      sg.pop();
    }
    stack<int> calc;
    for(int i=0;i<form.size();i++){
      if(form[i]>=0){
	calc.push(f_nums[form[i]]);
      }
      else{
	double a,b,c;
	b = calc.top();
	calc.pop();
	a = calc.top();
	calc.pop();
	if(f_signs[-form[i]-1]=='+')c = a+b;
	if(f_signs[-form[i]-1]=='-')c = a-b;
	if(f_signs[-form[i]-1]=='*')c = a*b;
	if(f_signs[-form[i]-1]=='/')c = a/b;
	calc.push(c);
      }
    }
    cout<<calc.top()<<endl;
  }
  return 0;
}
  
  