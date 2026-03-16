#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb(in,tmp) in.push_back(tmp)
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
using namespace std;
int main(){
  string in;
  while(getline(cin,in)){
    rep(i,in.size()-4){
      if(in.substr(i,5)=="apple")in.replace(i,5,"peach");
      else if(in.substr(i,5)=="peach")in.replace(i,5,"apple");
    }
    cout<<in<<endl;
    }


}