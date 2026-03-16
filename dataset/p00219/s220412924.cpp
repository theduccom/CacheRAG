#include<iostream>
using namespace std;
int main(){
  int n,t,tn[10];
  while(cin>>n){
    if(n==0) break;
    for(int i=0;i<10;i++) tn[i] = 0;
    for(int i=0;i<n;i++){
      cin >> t;
      tn[t]++;
    }
    for(int i=0;i<10;i++){
      if(tn[i]==0){
	cout << '-' << endl;
	continue; 
      }
      for(int j=0;j<tn[i];j++) cout << '*';
	cout << endl;
    }
  }
  return 0;
}