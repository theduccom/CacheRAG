#include<queue>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i;
  short a[8][8][8][8][8][8][8],b[8],p;
  short *c;
  string s="";
  queue<pair<string,short> > q;
  memset(a,-1,sizeof(a));
  for(i=0;i<8;i++)
    s+=i;
  q.push(make_pair(s,0));
  while(q.empty()==0){
    s=q.front().first;
    p=q.front().second;
    q.pop();
    c=&a[(int)s[0]][(int)s[1]][(int)s[2]][(int)s[3]][(int)s[4]][(int)s[5]][(int)s[6]];
    if(*c==-1){
      *c=p;
      if(0){
      }else if(s[0]==0){
	s[0]=s[1];
	s[1]=0;
	q.push(make_pair(s,p+1));
	s[1]=s[0];
	s[0]=s[4];
	s[4]=0;
	q.push(make_pair(s,p+1));
      }else if(s[1]==0){
	s[1]=s[0];
	s[0]=0;
	q.push(make_pair(s,p+1));
	s[0]=s[1];
	s[1]=s[2];
	s[2]=0;
	q.push(make_pair(s,p+1));
	s[2]=s[1];
	s[1]=s[5];
	s[5]=0;
	q.push(make_pair(s,p+1));
      }else if(s[2]==0){
	s[2]=s[1];
	s[1]=0;
	q.push(make_pair(s,p+1));
	s[1]=s[2];
	s[2]=s[3];
	s[3]=0;
	q.push(make_pair(s,p+1));
	s[3]=s[2];
	s[2]=s[6];
	s[6]=0;
	q.push(make_pair(s,p+1));
      }else if(s[3]==0){
	s[3]=s[2];
	s[2]=0;
	q.push(make_pair(s,p+1));
	s[2]=s[3];
	s[3]=s[7];
	s[7]=0;
	q.push(make_pair(s,p+1));
      }else if(s[4]==0){
	s[4]=s[0];
	s[0]=0;
	q.push(make_pair(s,p+1));
	s[0]=s[4];
	s[4]=s[5];
	s[5]=0;
	q.push(make_pair(s,p+1));
      }else if(s[5]==0){
	s[5]=s[4];
	s[4]=0;
	q.push(make_pair(s,p+1));
	s[4]=s[5];
	s[5]=s[6];
	s[6]=0;
	q.push(make_pair(s,p+1));
	s[6]=s[5];
	s[5]=s[1];
	s[1]=0;
	q.push(make_pair(s,p+1));
      }else if(s[6]==0){
	s[6]=s[5];
	s[5]=0;
	q.push(make_pair(s,p+1));
	s[5]=s[6];
	s[6]=s[7];
	s[7]=0;
	q.push(make_pair(s,p+1));
	s[7]=s[6];
	s[6]=s[2];
	s[2]=0;
	q.push(make_pair(s,p+1));
      }else if(s[7]==0){
	s[7]=s[6];
	s[6]=0;
	q.push(make_pair(s,p+1));
	s[6]=s[7];
	s[7]=s[3];
	s[3]=0;
	q.push(make_pair(s,p+1));
      }
    }
  }
  while(cin>>b[0]){
    for(i=1;i<8;i++)
      cin>>b[i];
    cout<<a[b[0]][b[1]][b[2]][b[3]][b[4]][b[5]][b[6]]<<endl;
  }
  return 0;
}