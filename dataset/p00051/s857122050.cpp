#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int ruijou(int);

main(){
  int n;
  while(cin >> n){
    for(int i=0;i<n;i++){
      string in;
      cin >> in;
      int data[8];
      for(int j=0;j<8;j++){
	data[j]=in[j]-'0';
      }
      sort(data, data+8);
      int min=0;
      for(int j=7, k=0;j>=0;j--, k++){
	if(data[j]==0) continue;
	min+=ruijou(k)*data[j];
      }
      reverse(data, data+8);
      if(data[0]==0){
	cout << 0 << endl;
	continue;
      }
      int max=0;
      for(int j=7, k=0;j>=0;j--, k++){
	if(data[j]==0) continue;
	max+=ruijou(k)*data[j];
      }
      cout << max-min << endl;
    }
  }
  return 0;
}

int ruijou(int n){
  int ans=1;
  for(int i=0;i<n;i++){
    ans*=10;
  }
  return ans;
}