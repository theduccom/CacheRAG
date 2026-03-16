#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

  int weight;
  int n;

  while(cin>>weight){
    vector<int> result;
    while(1){
      if(weight == 0 || weight == 1 || weight ==2 || weight ==4 || weight ==8 || weight ==16 || weight ==32 || weight ==64 || weight ==128 || weight ==256 || weight ==512){
	result.push_back(weight);
	break;
      }
      if(weight<4)
	n=2;
      else if(weight<8)
	n=4;
      else if(weight<16)
	n=8;
      else if(weight<32)
	n=16;
      else if(weight<64)
	n=32;
      else if(weight<128)
	n=64;
      else if(weight<256)
	n=128;
      else if(weight<512)
	n=256;
      else
	n=512;
      
      result.push_back(n);
      weight-=n;
    }

    sort(result.begin(),result.end());

    int flag=0;
    for(auto i:result){
      if(flag==1)
	cout<<" ";
      else flag=1;
      cout<<i;
    }
    
    cout<<endl;
    result.clear();
  }
}