#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
typedef pair<int,string> P;

string dif = "01234567";
int dx[]={-1,1,-4,4};
map<string,int> used;

void bfs(){
  queue<P> que;
  que.push(P(0,dif));
  used[dif] = 1;
  while(!que.empty()){
    P p = que.front(); que.pop();
    int pos = p.first;
    string now = p.second;
    for(int i=0;i<4;i++){
      int next = pos+dx[i];
      if(next >= 0 && next <= 7 && !(pos==3&&i==1) && !(pos==4&&i==0)){
	string tmp = now;
	swap(tmp[pos],tmp[next]);
	if(used[tmp] == 0){
	  used[tmp] = used[now] + 1;
	  que.push(P(next,tmp));
	}
      }
    }
  }
}

int main(){
  string str;
  bfs();
  while(cin >> str){
    string puzzle = "";
    puzzle += str;
    for(int i=0;i<7;i++){
      cin >> str;
      puzzle += str;
    }
    cout << used[puzzle] - 1 << endl;
  }
}