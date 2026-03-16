#include<iostream>
using namespace std;

string prime(int n){
  int i,j;
  string p="001";
  while(p.size()<=n)p+="10";
  i=3;
  while(i*i<n){
    for(j=3*i;j<n;j+=2*i)p[j]='0';
    do{i+=2;}while(p[i]-'1');
  }
  return p;
}

int main(){
  int n,ans;
  string p = prime(50000);

  while(1){
    cin >> n;
    if(!n)break;

    ans = 0;
    for(int i=0;i<=n/2;i++){
      if(p[i]-'0' && p[n-i]-'0')ans++;
    }
    cout << ans << endl;
  }
}