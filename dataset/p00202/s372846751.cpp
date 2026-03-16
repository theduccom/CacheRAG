#include<iostream>
using namespace std;

int main(){
  int n,x,i,j;
  int d[30];
  bool can[1000001];

  for(;;){
    cin >> n >> x;
    if(!n && !x)break;

    for(i=0;i<n;i++)cin >> d[i];
    for(i=1;i<=x;i++)can[i] = false;
    can[0] = true;

    for(i=0;i<n;i++){
      for(j=0;j+d[i]<=x;j++){
	if(can[j])can[j+d[i]] = true;
      }
    }

    if(!(x&1))x--;
    for(i=x;i>=0;i-=2)
      if(can[i] && i&1){
	bool f=true;
	for(j=3;j*j<=i;j+=2)
	  if(!(i%j)){
	    f = false;
	    break;
	  }
	if(f)break;
      }
    if(i<0)cout << "NA" << endl;
    else cout << i << endl;
  }
}