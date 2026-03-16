#include<stack>
#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
using namespace std;
string its(int n){
  stringstream s;
  s<<n;
  return s.str();
}
stack<string> mep(stack<string> me,string s){
  int a,b;
  b=atoi(me.top().c_str());
  me.pop();
  a=atoi(me.top().c_str());
  me.pop();
  if(s=="+")
    me.push(its(a+b));
  else if(s=="-")
    me.push(its(a-b));
  else if(s=="*")
    me.push(its(a*b));
  else if(s=="/")
    me.push(its(a/b));
  return me;
}
int main(){
  int h,i,j;
  int n,len;
  string s;
  stack<string> me,st;
  cin>>n;
  for(h=0;h<n;h++){
    cin>>s;
    len=s.length()-1;
    for(i=0;i<len;i++){
      if('0'<=s[i]&&s[i]<='9'){
	for(j=i;j<len;j++)
	  if(s[j]<'0'||'9'<s[j])
	    break;	
	me.push(s.substr(i,j-i));
	i=j-1;
      }else if(s[i]=='('){
	st.push(s.substr(i,1));
      }else if(s[i]==')'){
	while(st.top()!="("){
	  me=mep(me,st.top());
	  st.pop();
	}
	st.pop();
      }else if(s[i]=='+'||s[i]=='-'){
	if(st.empty());
	else if(st.top()=="(");
	else{
	  while(st.empty()==0){
	    if(st.top()=="(")
	      break;
	    else{
	      me=mep(me,st.top());
	      st.pop();
	    }
	  }
	}
	st.push(s.substr(i,1));
      }else if(s[i]=='*'||s[i]=='/'){
	if(st.empty());
	else if(st.top()=="(");
	else if(st.top()=="+"||st.top()=="-");
	else{
	  while(st.empty()==0){
	    if(st.top()=="(")
	      break;
	    else if(st.top()=="+"||st.top()=="-")
	      break;
	    else{
	      me=mep(me,st.top());
	      st.pop();
	    }
	  }
	}
	st.push(s.substr(i,1));
      }
    }
    while(st.empty()==0){
      me=mep(me,st.top());
      st.pop();
    }
    cout<<me.top()<<endl;
    me.pop();
  }
  return 0;
}