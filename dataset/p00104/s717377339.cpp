#include<bits/stdc++.h>
using namespace std;
int main(){
  int H,W;
  while(cin>>H>>W,H+W!=0){
    string tile[H];
    for(int i=0;i<H;i++)
      cin>>tile[i];
    if(tile[0][0]=='.'){
      cout<<"0 0"<<endl;
      continue;
    }
    int i=0;
    pair<int,int> now=make_pair(0,0);
    while(i!=20001){
      i++;
      if(i==20000)
	cout<<"LOOP"<<endl;
      if(tile[now.first][now.second]=='.'){
	cout<<now.second<<" "<<now.first<<endl;
	break;
      }else if(tile[now.first][now.second]=='>')
	now.second++;
      else if(tile[now.first][now.second]=='<')
	now.second--;
      else if(tile[now.first][now.second]=='v')
	now.first++;
      else if(tile[now.first][now.second]=='^')
	now.first--;
    }
  }
  return 0;
}