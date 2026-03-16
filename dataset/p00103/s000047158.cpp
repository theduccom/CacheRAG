#include<iostream>
#include<string>
using namespace std;
int main(){
  int hit=0;
  int ining=0;
  int ining2=0;
  int out=0;
  int team[100]={0};
  int a=0;
  string ivent;
  cin>> ining;
  ining2=ining;
  while(ining){
    cin>> ivent;
    if(ivent=="OUT"){
      out++;
    }
    else if(ivent=="HIT"){
      hit++;
    }
    else{
      team[a]+=hit+1;
      hit=0;
    }
    if(hit>3){
      team[a]++;
      hit--;
    }
    if(out>=3){
      out=0;
      hit=0;
      ining--;
      a++;
    }
  }
  for(int i=0;i<ining2;i++){
  cout<< team[i]<< endl;
  }
}