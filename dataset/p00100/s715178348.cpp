#include<iostream>
using namespace std;
int main(){
  int n,b,t,s;
  while(cin>>n){
    if(n==0) break;
    int h[4000];
    int index = 0;
    int h2 = 0;
    unsigned long long int p[4001]={0};
    for(int i=0;i<n;i++){
      cin >> b >> t >> s;
      if(p[b]==0){
	h[index] = b;
	index++;
      } 
      p[b] += t * s;
    }
    /*for(int i=0;i<index;i++){
      cout << p[h[i]] << endl;
      cout << h[i] << endl;
      }*/
    for(int i=0;i<index;i++){
      if(p[h[i]]>=1000000){
	cout << h[i] << endl;
	h2 = 1;
      }
    }
    if(h2==0) cout << "NA" << endl;
    //cout << endl;
  }
  return 0;
}