#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#define lol(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
typedef long long ll;
using namespace std;

int isOP(char z){
  if(z=='+')return mod+1;
  if(z=='-')return mod+2;
  if(z=='*')return mod+3;
  if(z=='/')return mod+4;
  return 0;
}
int solve(string s){
  queue<int> Q;
  int cnt=0,i=0;
  bool done=false;
  while(i<s.size()){
    
    if('0'<=s[i]&&s[i]<='9'){
      cnt*=10;
      cnt+=s[i]-'0';
      done=true;
    }
    else{
      if(done)Q.push(cnt);
      done=false;
      cnt=0;
    }
    
    if(s[i]=='('){
      int pnt=0,tnt=1;
      for(int j=i+1;j<s.size();j++){
	if(s[j]=='(')tnt++;
	if(s[j]==')')tnt--;
	if(tnt==0){pnt=j;break;}
      }
      Q.push(solve(s.substr(i+1,pnt-i-1)));
      i=pnt+1;continue;
    }
    
    int tmp=isOP(s[i]);
    if(tmp>0)Q.push(tmp);
    
    i++;
  }
  if(done)Q.push(cnt);
  
  queue<int> R;
  int x;
  while(!Q.empty()){
    int a=Q.front();Q.pop();
    if(a==mod+1||a==mod+2){
      R.push(x);
      R.push(a);
    }
    if(a==mod+3){
      int b=Q.front();Q.pop();
      x*=b;
    }
    if(a==mod+4){
      int b=Q.front();Q.pop();
      x/=b;
    }
    if(a<mod) x=a;
  }
  R.push(x);
  
  x=0;
  while(!R.empty()){
    int a=R.front();R.pop();
    if(a==mod+1){
      int b=R.front();R.pop();
      x+=b;
    }
    if(a==mod+2){
      int b=R.front();R.pop();
      x-=b;
    }
    if(a<mod) x=a;
  }
  return x;
}

int main(){
  int n;cin>>n;
  lol(i,n){
    string s;
    cin>>s;
    s=s.substr(0,s.size()-1);
    cout<<solve(s)<<endl;
  }
  return 0;
}