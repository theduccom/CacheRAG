#include<iostream>
#include<algorithm>
#define MAX 1000;
using namespace std;

int main(){
  int n,m,s;

  while(cin >> n >> m){
    int p[n];
    if(n==0 || m==0) return 0;
    for(int i=0; i<n; i++){
      cin >> p[i];
    }   

    int sum=0,ans=0, min;
    sort(p, p+n, greater<int>());

    for(int i=0; i<n; i+=m){
      sum=0;
      for(int j=i; j<i+m && j<n; j++){
	sum += p[j];
      }
      if(i+m <= n) sum -= p[i+m-1];
      ans += sum;
    }
    cout << ans << endl;
  }
  return 0;
}