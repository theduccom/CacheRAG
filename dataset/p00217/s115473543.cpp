#include<iostream>
using namespace std;

int main(){
  int i,n;
  int p,d1,d2,d;
  int max,maxnum;

  while(1){
    cin >> n;
    if(!n)break;

    max = 0;
    for(i=0;i<n;i++){
      cin >> p >> d1 >> d2;
      d = d1 + d2;
      if(max<d){
	max = d;
	maxnum = p;
      }
    }
    cout << maxnum << " " << max << endl;
  }
}