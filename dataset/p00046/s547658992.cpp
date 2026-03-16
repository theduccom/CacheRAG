#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  double a[11111];
  int n=0;
  double ans;
  while(cin>>a[n]){
    n++;
  }
  sort(a,a+n);
  ans=a[n-1]-a[0];
  cout<<ans<<endl;
}