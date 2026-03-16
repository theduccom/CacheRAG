#include<bits/stdc++.h>
using namespace std;
int main(){
  int a;
  char h[8];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<8;j++){
      cin>>h[j];
    }
    int hiku=0;
    int tasu=0;
    sort(h,h+8);
    int jou=1;
    for(int j=0;j<8;j++){
      tasu+=(h[j]-'0')*jou;
      jou=jou*10;
    }
    sort(h,h+8,greater<int>());
    jou=1;
    for(int j=0;j<8;j++){
      hiku+=(h[j]-'0')*jou;
      jou=jou*10;
    }
    cout<<tasu-hiku<<endl;
  }
}
    