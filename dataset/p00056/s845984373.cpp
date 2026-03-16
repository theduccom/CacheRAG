#include<iostream>
#include<bitset>
using namespace std;

bitset<50001> pt;

void MakeTable(int n){
  pt.reset();
  pt.set(2);
  
  int i;
  for(i=3;i<=n;i+=2)pt.set(i);
  
  i = 3;
  while(i*i<=n){
    for(int j=3*i;j<=n;j+=2*i)pt.reset(j);
    do{i+=2;}while(!pt[i]);
  }
}

int main(){
  int n,ans;
  MakeTable(50000);

  while(1){
    cin >> n;
    if(!n)break;

    ans = 0;
    for(int i=0;i<=n/2;i++)
      if(pt[i] && pt[n-i])ans++;
    cout << ans << endl;
  }
}
	