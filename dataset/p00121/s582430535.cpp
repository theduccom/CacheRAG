#include<iostream>
#include<sstream>
#include<queue>
#include<map>
using namespace std;

long swap(long x,int i,int j){
  long y = x;
  y = (y&~((15<<(i*4))|(15<<(j*4))))|((x>>(i*4))&15)<<(j*4)|((x>>(j*4))&15)<<(i*4);
  return y;
}

void pr(long x){
  for(int i=0; i<8; i++) cout << ((x>>(4*i))&15) << " ";
  cout << endl;
}

int main(){
  long finish = 0;
  for(int i=0; i<8; i++) finish += i<<(i*4);
  map<long, long long> count;
  queue<long> que;
  count[finish] = 0;
  que.push(finish);
  int n = 0;

  while(!que.empty()){
    n++;
    queue<long> next;
    while(!que.empty()){
      long y = que.front();
      que.pop();
      if((y&15)==0){
        next.push(swap(y,0,1));
        next.push(swap(y,0,4));
      }else if(((y>>4)&15)==0){
        next.push(swap(y,1,0));
        next.push(swap(y,1,2));
        next.push(swap(y,1,5));
      }else if(((y>>4*2)&15)==0){
        next.push(swap(y,2,1));
        next.push(swap(y,2,3));
        next.push(swap(y,2,6));
      } else if(((y>>4*3)&15)==0){
        next.push(swap(y,3,2));
        next.push(swap(y,3,7));
      } else if(((y>>4*4)&15)==0){
        next.push(swap(y,4,0));
        next.push(swap(y,4,5));
      } else if(((y>>4*5)&15)==0){
        next.push(swap(y,5,4));
        next.push(swap(y,5,6));
        next.push(swap(y,5,1));
      } else if(((y>>4*6)&15)==0){
        next.push(swap(y,6,5));
        next.push(swap(y,6,7));
        next.push(swap(y,6,2));
      } else if(((y>>4*7)&15)==0){
        next.push(swap(y,7,6));
        next.push(swap(y,7,3));
      } else{
        cout << "Error" << endl;
      }
    }
    while(!next.empty()){
      long y = next.front();
      next.pop();
      if(count.find(y) == count.end()){
        que.push(y);
        count[y] = n;
      }
    }
  }

  string line;
  while(getline(cin,line)){
    int a[8];
    istringstream s(line);
    long x = 0;
    for(int i=0; i<8; i++) s >> a[i];
    for(int i=0; i<8; i++) x += a[i]<<(4*i);
    cout << count[x] << endl;
  }
  return 0;
}