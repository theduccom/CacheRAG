#include<functional>
#include<list>
#include<queue>
#include<stack>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


class word{
 public:
  char w[31];
  std::priority_queue<int> q;
};


int main(){
  using namespace std;  
  int p,cmp;
  char str[31];
  list<word> wlst;
  list<word>::iterator it;
  stack<int> b;
  word *buf;

  while(scanf("%s %d",str,&p)!=EOF){
    it=wlst.begin();
    while(it!=wlst.end()){
      cmp=strcmp(it->w,str);
      if(!cmp){
	it->q.push(p);
	break;
      }else if(cmp>0){
	buf=new word();
	strcpy(buf->w,str);
	buf->q.push(p);
	wlst.insert(it,*buf);
	break;
      }
      ++it;
    }
    if(it==wlst.end()){
      buf=new word();
      strcpy(buf->w,str);
      buf->q.push(p);
      wlst.insert(it,*buf);
    }
  }
  it=wlst.begin();
  while(it!=wlst.end()){
    printf("%s\n",it->w);
    while(!(it->q.empty())){
      b.push(it->q.top());
      it->q.pop();
    }
    while(1){
      printf("%d",b.top());
      b.pop();
      if(b.empty()){
	printf("\n");
	break;
      }else{
	printf(" ");
      }
    }
    it++;
  }
  return 0;
}