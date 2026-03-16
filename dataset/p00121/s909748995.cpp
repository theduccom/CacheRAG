#include<bits/stdc++.h>
using namespace std;
#define ANSWER(x) cout<<x<<endl
#define debug(x) cout<<#x<<": "<<x
const int BA = 1000;
const int INFTY = (1<<21);
typedef pair<int,string> p;
int main(){
  int up[3] = {-1,1,4};
  int under[3] = {-1,1,-4};
  map<string,bool> m;
  map<string,int> ans;
  string s = "01234567",hoge="";
  char c;
  queue<p> q;
  q.push(make_pair(0,s));
  while(!q.empty()){
    p a = q.front();q.pop();
    int b = a.second.find('0');
    m[a.second] = true;
    ans[a.second] = a.first;
    a.first++;
    string ss;
    for(int i=0;i<3;i++){
      ss = a.second;
      if(b < 4){
	if(!(b == 0 && i == 0) &&!(b == 3 && i == 1) ){
	  swap(ss[b],ss[b+up[i]]);
	  if(!m[ss]){
	    q.push(make_pair(a.first,ss));
	  }
	}
      }
      else{
	if(!(b == 4 && i == 0) && !(b == 7 && i == 1)){
	  swap(ss[b],ss[b+under[i]]);
	  if(!m[ss]){
	    q.push(make_pair(a.first,ss));
	  }
	}
      }
    }
  }
  while(1){
    cin >> c;
    if(cin.eof())break;
    hoge += c;
    for(int i=1;i<=7;i++){
      cin >> c;
      hoge += c;
    }
    cout << ans[hoge] << endl;
    hoge = "";
  }
  
  
}