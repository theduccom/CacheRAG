#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
  int n;
  while(1){
    cin>>n;
    if(!n)break;
    int pm,pe,pj;
    rep(i,n){
      cin>>pm>>pe>>pj;
      int average=(pm+pe+pj)/3;
      if(pm==100 || pe==100 || pj==100)cout<<"A"<<endl;
      else if((pm+pe)/2>=90)cout<<"A"<<endl;
      else if(average>=80)cout<<"A"<<endl;
      else if(average>=70)cout<<"B"<<endl;
      else if(average>=50 &&(pm>=80 || pe>=80))cout<<"B"<<endl;
      else cout<<"C"<<endl;
    }
  }
  return 0;
}