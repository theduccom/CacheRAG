#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;

map<string, int> dist;

void bfs(){
  pair<string, int> u;
  queue<pair<string, int> > Q;
  Q.push(make_pair("01234567", 0));
  dist["01234567"] = 0;
  while(!Q.empty()){
    u = Q.front(); Q.pop();
    int pos;
    for(int i=0;i<u.first.size();i++){
      if(u.first[i] == '0'){
	pos = i;
	break;
      }
    }
    string tmp;
    if(pos!=0 && pos!=4){
      tmp = u.first;
      swap(tmp[pos], tmp[pos-1]);
      if(dist.find(tmp) == dist.end()){
	dist[tmp] = u.second+1;
	Q.push(make_pair(tmp, u.second+1));
      }
    }
    if(pos!=7 && pos!=3){
      tmp = u.first;
      swap(tmp[pos], tmp[pos+1]);
      if(dist.find(tmp) == dist.end()){
	dist[tmp] = u.second+1;
	Q.push(make_pair(tmp, u.second+1));
      }
    }
    tmp = u.first;
    if(pos<4){
      swap(tmp[pos], tmp[pos+4]);
      if(dist.find(tmp) == dist.end()){
	dist[tmp] = u.second+1;
	Q.push(make_pair(tmp, u.second+1));
      }
    }else{
      swap(tmp[pos], tmp[pos-4]);
      if(dist.find(tmp) == dist.end()){
	dist[tmp] = u.second+1;
	Q.push(make_pair(tmp, u.second+1));
      }
    }
  }
}

main(){
  bfs();
  string str;
  while(cin >> str){
    char c;
    for(int i=0;i<7;i++){
      cin >> c;
      str += c;
    }
    cout << dist[str] << endl;
  }
  return 0;
}