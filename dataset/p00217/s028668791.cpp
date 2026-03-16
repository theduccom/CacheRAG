#include<iostream>
#include<string>
using namespace std;
int main(){
  int n,d1,d2,ans;
  string kn,anskn;
  while(cin>>n){
    if(n==0) break;
    ans = 0;
    for(int i=0;i<n;i++){
	cin >> kn >> d1 >> d2;
	if(ans<d1+d2){
	  ans = d1+d2;
	  anskn = kn;
	}
      }
    cout << anskn << ' ' << ans << endl;
  }
  return 0;
}

    