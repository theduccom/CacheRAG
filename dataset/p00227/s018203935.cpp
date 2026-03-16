#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
  int n,m,a[11111];
  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0) break;
    int total = 0;
    for(int i=0;i<n;i++){
      cin >> a[i];
      total += a[i];
    }
    sort(a,a+n,greater<int>() );
    for(int i=m-1;i<n;i+=m) total -= a[i];
    cout << total << endl;
  }
}