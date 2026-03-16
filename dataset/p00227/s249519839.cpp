#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n,m;
  while(1){
    cin >> n >> m;
    if(n == 0 && m==0) break;
    int item[1010];
    for(int i=0;i<n;i++){
      cin >> item[i];
    }
    sort(item,item+n);
    int ans=0,f=1;
    for(int i=n-1;i>=0;i--){
      if(f==m){
	f=1;
      }
      else{
	ans += item[i];
	f++;
      }
    }
    cout << ans <<"\n";
  }

}