#include<bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

int x[4]={4,-4,1,-1};

bool in(int a){
  if(0<=a && a<=7)return true;
  return false;
}

int main()
{
  char c;
  string s;

  queue<string> q;
  map<string,int> m;
  q.push("01234567");
  m["01234567"]=0;
  int ans=0;
  while(!q.empty()){
    string u=q.front();
    q.pop();

    int index=u.find('0');
    for(int j=0;j<4;j++){
      if((index==3 && x[j]==1) || (index==4 && x[j]==-1))continue;
      if(in(index+x[j])){
	string t=u;
	swap(t[index],t[index+x[j]]);
	if(m.find(t)==m.end()){
	  m[t]=m[u]+1;
	  q.push(t);
	}
      }
    }
  }

  while(cin>>c){
    s=c;
    for(int i=0;i<7;i++){
      cin>>c;
      s+=c;
    }
    cout<<m[s]<<endl;
  }
  return 0;
}