#include <iostream>
#include <cmath>
#define MAX 1000000

using namespace std;

bool prime[MAX+1];

void eratos(){
  for(int i=0;i<=MAX;i++) prime[i]=false;
  for(int i=3;i<=MAX;i+=2) prime[i]=true;
  prime[2]=true;
  int limit=(int)sqrt((double)MAX)+1;
  for(int i=3;i<=limit;i+=2){
    if(!prime[i]) continue;
    for(int j=i+i;j<=MAX;j+=i){
      prime[j]=false;
    }
  }
}

main(){
  eratos();
  int n, x;
  while(1){
    cin >> n >> x;
    if(n==0 && x==0) break;

    int items[30];
    for(int i=0;i<n;i++){
      cin >> items[i];
    }

    int max=-1;

    bool can[MAX+1];
    for(int i=0;i<=x;i++) can[i]=false;
    can[0]=true;
    for(int i=0;i<=x;i++){
      if(can[i]){
	int tmp;
	for(int j=0;j<n;j++){
	  tmp=i+items[j];
	  if(tmp<=x){
	    can[tmp]=true;
	  }
	}
      }
    }
    for(int i=x;i>=0;i--){
      if(i==0) cout << "NA" << endl;
      if(can[i] && prime[i]){
	cout << i << endl;
	break;
      }
    }
  }
  return 0;
}