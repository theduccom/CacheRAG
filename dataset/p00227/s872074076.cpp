//48
#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
  for(int n,m;cin>>n>>m,n|m;){
    int p[1000];
    for(int i=0;i<n;i++){
      cin>>p[i];
    }
    sort(p,p+n,greater<int>());
    int cost=0;
    int h=0;
    for(int i=0;i<n;i++){
      h++;
      if(h%m){
	cost+=p[i];
      }
    }
    cout<<cost<<endl;
  }
  return 0;
}