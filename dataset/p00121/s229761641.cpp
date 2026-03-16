#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<queue>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  vector<int> v(8);
  rep(i,8)v[i] = i;

  map< vector<int>, int > steps;
  steps[v] = 0;
  queue< vector<int> > q;
  q.push(v);

  while(q.size()){
    v = q.front(); q.pop();
    int s = steps[v];

    int cur = 0;
    rep(i,8){
      if(v[i] == 0)cur = i;
    }

    if(cur-4>=0){
      swap(v[cur],v[cur-4]);
      if(steps.count(v) == 0){
	steps[v] = s + 1;
	q.push(v);
      }
      swap(v[cur],v[cur-4]);
    }

    if(cur+4<8){
      swap(v[cur],v[cur+4]);
      if(steps.count(v) == 0){
	steps[v] = s + 1;
	q.push(v);
      }
      swap(v[cur],v[cur+4]);
    }

    if(cur%4!=0 && cur-1>=0){
      swap(v[cur],v[cur-1]);
      if(steps.count(v) == 0){
	steps[v] = s + 1;
	q.push(v);
      }
      swap(v[cur],v[cur-1]);
    }

    if(cur%4!=3 && cur+1<8){
      swap(v[cur],v[cur+1]);
      if(steps.count(v) == 0){
	steps[v] = s + 1;
	q.push(v);
      }
      swap(v[cur],v[cur+1]);
    }
  }

  while(cin >> v[0]){
    rep(i,7)cin >> v[i+1];
    cout << steps[v] << endl;
  }
}