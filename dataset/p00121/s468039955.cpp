#include <iostream>
#include <string>
#include <queue>
#include <map>
using namespace std;
#define P pair<string,int>
void swap(char* a,char* b)
{
  char t;
  t = *a;
  *a = *b;
  *b = t;
}
int main()
{
  queue< P > q;
  map<string,int> st;
  q.push( P("01234567",0) );
  st["01234567"] = 0;
  while(!q.empty()){
    P v = q.front(); q.pop();
    string p = v.first;
    if(p[0] == '0'){
      string s = p;
      swap(&s[0],&s[1]);
      if(st.find(s) == st.end()){
	q.push( P(s,v.second+1) );
	st[s] = v.second+1;
      }
      string t = p;
      swap(&t[0],&t[4]);
      if(st.find(t) == st.end()){
	q.push( P(t,v.second+1) );
	st[t] = v.second+1;
      }
    }else if(p[1] == '0'){
      string s = p;
      swap(&s[1],&s[0]);
      if(st.find(s) == st.end()){
	q.push( P(s,v.second+1) );
	st[s] = v.second+1;
      }
      string t = p;
      swap(&t[1],&t[2]);
      if(st.find(t) == st.end()){
	q.push( P(t,v.second+1) );
	st[t] = v.second+1;
      }
      string u = p;
      swap(&u[1],&u[5]);
      if(st.find(u) == st.end()){
	q.push( P(u,v.second+1) );
	st[u] = v.second+1;
      }
    }else if(p[2] == '0'){
      string s = p;
      swap(&s[2],&s[1]);
      if(st.find(s) == st.end()){
	q.push( P(s,v.second+1) );
	st[s] = v.second+1;
      }
      string t = p;
      swap(&t[2],&t[3]);
      if(st.find(t) == st.end()){
	q.push( P(t,v.second+1) );
	st[t] = v.second+1;
      }
      string u = p;
      swap(&u[2],&u[6]);
      if(st.find(u) == st.end()){
	q.push( P(u,v.second+1) );
	st[u] = v.second+1;
      }
    }else if(p[3] == '0'){
      string s = p;
      swap(&s[3],&s[2]);
      if(st.find(s) == st.end()){
	q.push( P(s,v.second+1) );
	st[s] = v.second+1;
      }
      string t = p;
      swap(&t[3],&t[7]);
      if(st.find(t) == st.end()){
	q.push( P(t,v.second+1) );
	st[t] = v.second+1;
      }
    }else if(p[4] == '0'){
      string s = p;
      swap(&s[4],&s[5]);
      if(st.find(s) == st.end()){
	q.push( P(s,v.second+1) );
	st[s] = v.second+1;
      }
      string t = p;
      swap(&t[4],&t[0]);
      if(st.find(t) == st.end()){
	q.push( P(t,v.second+1) );
	st[t] = v.second+1;
      }
    }else if(p[5] == '0'){
      string s = p;
      swap(&s[5],&s[4]);
      if(st.find(s) == st.end()){
	q.push( P(s,v.second+1) );
	st[s] = v.second+1;
      }
      string t = p;
      swap(&t[5],&t[6]);
      if(st.find(t) == st.end()){
	q.push( P(t,v.second+1) );
	st[t] = v.second+1;
      }
      string u = p;
      swap(&u[5],&u[1]);
      if(st.find(u) == st.end()){
	q.push( P(u,v.second+1) );
	st[u] = v.second+1;
      }
    }else if(p[6] == '0'){
      string s = p;
      swap(&s[6],&s[5]);
      if(st.find(s) == st.end()){
	q.push( P(s,v.second+1) );
	st[s] = v.second+1;
      }
      string t = p;
      swap(&t[6],&t[7]);
      if(st.find(t) == st.end()){
	q.push( P(t,v.second+1) );
	st[t] = v.second+1;
      }
      string u = p;
      swap(&u[6],&u[2]);
      if(st.find(u) == st.end()){
	q.push( P(u,v.second+1) );
	st[u] = v.second+1;
      }
    }else if(p[7] == '0'){
      string s = p;
      swap(&s[7],&s[6]);
      if(st.find(s) == st.end()){
	q.push( P(s,v.second+1) );
	st[s] = v.second+1;
      }
      string t = p;
      swap(&t[7],&t[3]);
      if(st.find(t) == st.end()){
	q.push( P(t,v.second+1) );
	st[t] = v.second+1;
      }
    }
  }
  char a[9];
  while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7]){
    a[8] = '\0';
    map<string,int>::iterator it = st.find(a);
    cout << it->second << endl;
  }
  return 0;
}