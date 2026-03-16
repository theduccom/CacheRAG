#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  int n,x,two,fiv,now,i;
  while(cin>>x, x){
    two=fiv=0;
    for(i=1;i<=x;i++){
      now=i;
      while(1){
	if(now%2==0){
	  two++;
	  now/=2;
	}
	else if(now%5==0){
	  fiv++;
	  now/=5;
	}
	else break;
      }
    }
    cout << min(two,fiv) << endl;
  }
  
  return 0;
}
      
    
    