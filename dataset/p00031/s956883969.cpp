#include<iostream>
using namespace std;

int main(){
  int n;
  while(cin>>n){
    int last = -1;
    for(int i=0;i<10 && (1<<i) <= n;i++){
      if(( (1<<i) & n )>>i == 0x1){
	if(last !=-1){
	  cout<<last<<" ";
	}
	last = (1<<i);
      }
    }
    if(last != -1)
      cout<<last;
    cout<<endl;
  }
  return 0;
}