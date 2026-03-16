#include<iostream>
#include<cstring>
using namespace std;

int sell[10];
int main() {
  int n,p;
  while(cin>>n, n) {
    for(int i=0; i<10; ++i) sell[i] = 0;
    for(int i=0; i<n; ++i) {
      cin>>p;
      sell[p]++;
    }
    for(int i=0; i<10; ++i) {
      if(sell[i] == 0) cout<<"-";
      else while(sell[i]--) cout<<"*";
      cout<<endl;
    }
  }
}