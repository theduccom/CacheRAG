#include <iostream>
#include <limits.h>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <math.h>
//typedef pair<int,int> P;

using namespace std;


const int INF=INT_MAX/3;
const int V_MAX=10000,E_MAX=10000;

int V,E;
map<int,int> d;

int card[8]={0,1,2,3,4,5,6,7};

void decode(int x){

  for(int i=0;i<8;i++){
    card[7-i]=x%10;
    x=int(x/10);
  }
}

int encode(){

  int x=0;
  int y=1;
  
  for(int i=0;i<8;i++){
    x += card[7-i]*y;
    y *= 10;
  }
  return x;
}

void swap_v(int i,int j){
  int t=card[i];
  card[i]=card[j];
  card[j]=t;
}



int solve(){

  queue<int> qu;
  int dx[4]={-4,4,-1,1};

  int res=0;
  
  map<int,int>::iterator itr;
  int current=encode();

  d[current]=0;
  qu.push(current);
  
  while(!qu.empty()){

    current=qu.front();
    qu.pop();
    decode(current);

    //cout<<"card:";
    //for(int i=0;i<8;i++) cout<<card[i]<<" ";
    //cout<<"\n";
    
    int zero=0;
    for(int i=0;i<8;i++){
      if(card[i]==0){
	zero=i; break;
      }
    }
    
    for(int i=0;i<4;i++){
      int x=zero+dx[i];
      if(zero==3 && x==4) continue;
      if(zero==4 && x==3) continue;
      if(0<=x && x<=7){
	
	swap_v(zero, x);
	int s=encode();
	//cout<<s<<endl;
	//for(int i=0;i<8;i++) cout<<card[i]<<" ";
	
	map<int,int>::iterator itr=d.find(s);
	if(itr==d.end() || d[current]+1<d[s]){
	  d[s]=d[current]+1;
	  qu.push(s);
	  //cout<<"push:"<<s;
	}
	swap_v(zero,x);
      }
    }
    res++;
  }
  
  return res;
}

int main(){

  solve();
  bool end=false;
  
  while(1){
    
    for(int i=0;i<8;i++){
      cin>>card[i];
      if(cin.eof()) end=true;
    }
    if(end) break;
    int x = encode();
    cout<<d[x]<<endl;
  }
  
  return 0;
}