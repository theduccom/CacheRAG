#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a,b,c;
  cin >>a>>b>>c;
  if(a==1 && b==0 && c==0){
    cout <<"Close\n";
  }
  if(a==0 && b==1 && c==0) cout <<"Close\n";
  if(a==1 && b==1 && c==0) cout <<"Open\n";
  if(a==0 && b==0 && c==1) cout <<"Open\n";
  if(a==0 && b==0 && c==0) cout <<"Close\n";
  return(0);
}

