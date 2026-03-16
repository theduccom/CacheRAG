#include<bits/stdc++.h>
using namespace std;
int main(){
  while(true){
    int w;
    cin>>w; if(w==-1) break;
    if(w<=10) cout<<4280-1150<<"\n";
    w-=10;
    if(w<=10 && w>0) cout<<4280-(1150+w*125)<<"\n";
    w-=10;
    if(w<=10 && w>0) cout<<4280-(1150+10*125+w*140)<<"\n";
    w-=10;
    if(w>0) cout<<4280-(1150+10*125+10*140+w*160)<<"\n";
  }
      
    

  return 0;
}

