#include<iostream>
#include<string>
using namespace std;


int solve(){
  int base[4] = {0,0,0,0};
  int out = 0;
  int p = 0;
  while(out < 3){
    string s;
    cin>>s;

    //cout<<s<<endl;

    if(s == "HIT"){
      p += base[3];
      base[0] = 1;
      for(int i=3;i;i--){
        base[i] = base[i-1];
        base[i-1] = 0;
      }
    }else if(s== "OUT"){
      out++;
    }else if(s=="HOMERUN"){
      base[0]=1;
      for(int i=0;i<4;i++){
        p += base[i];base[i]=0;
      }
    }
    /*
    for(int i=0;i<4;i++){
      cout<<base[i];
    }cout<<" "<<p<<endl;
    */
  }

  return p;
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<solve()<<endl;
  }
}