#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin >>n;
  while(n--){
    vector<int> num(8);
    int x=0,y=0;
    for(int i=0; i<8; i++) scanf("%1d",&num[i]);
    sort(num.begin(),num.end());
    for(int i=0; i<8; i++) x = x*10+num[i];
    for(int i=7; i>=0; i--) y = y*10+num[i];
    cout <<y-x<<endl;
  }
  return 0;
}