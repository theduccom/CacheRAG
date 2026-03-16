#include<iostream>
#include<queue>
#include<map>
using namespace std;
#define N 8
int main()
{
  map<string,int>m;
  queue<string>q;
  string now,next;

  string s;
  char c;

  now="01234567";
  m[now]=0;
  q.push(now);
  while(!q.empty()){
    now=q.front();
    q.pop();
    for(int i=0;i<N;i++){
      if(now[i]!='0')continue;
      next=now;
      if(i!=0 && i!=4){
	swap(next[i],next[i-1]);
	if(!m.count(next)){
	  m[next]=m[now]+1;
	  q.push(next);
	}
      }
      next=now;
      if(i!=3 && i!=7){
	swap(next[i],next[i+1]);
	if(!m.count(next)){
	  m[next]=m[now]+1;
	  q.push(next);
	}
      }
      next=now;
      if(i<4){
	swap(next[i],next[i+4]);
	if(!m.count(next)){
	  m[next]=m[now]+1;
	  q.push(next);
	}
      }
      next=now;
      if(i>=4){
	swap(next[i],next[i-4]);
	if(!m.count(next)){
	  m[next]=m[now]+1;
	  q.push(next);
	}
      }
      break;
    }
  }


  while(cin>>c){
    s=c;
    for(int i=1;i<N;i++){
      cin>>c;
      s+=c;
    }
    cout<<m[s]<<endl;
  }
}