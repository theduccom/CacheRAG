//40
#include<iostream>
#include<utility>
#include<queue>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main(){
  queue<pair<vector<int>,int> > que;
  static const int g[]={0,1,2,3,4,5,6,7};
  vector<int> ov(g,g+8);
  que.push(make_pair(ov,0));
  map<vector<int>,int> m;
  while(!que.empty()){
    vector<int> cv=que.front().first;
    if(m.find(cv)!=m.end()){
      que.pop();
      continue;
    }
    m[cv]=que.front().second;
    int z=find(cv.begin(),cv.end(),0)-cv.begin();
    for(int i=0;i<4;i++){
      static const int d[]={1,4,-1,-4};
      int nz=z+d[i];
      if(0<=nz&&nz<8&&!(z*nz==12&&z+nz==7)){
	vector<int> nv=cv;
	swap(nv[z],nv[nz]);
	que.push(make_pair(nv,que.front().second+1));
      }
    }
    que.pop();
  }
  for(;;){
    vector<int> v(8);
    for(int i=0;i<8;i++){
      cin>>v[i];
      if(!cin)return 0;
    }
    cout<<m[v]<<endl;
  }
}