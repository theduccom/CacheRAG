#include<bits/stdc++.h>

using namespace std;

int main(){

  vector<int> arr(80000);

  for(int i=0;i<80000;++i)
	arr[i] = 1;

  for(int i=2;i<sqrt(80000);++i){
	if(arr[i]){
	  for(int j = 0;i*(j+2) < 80000; j++)
		arr[i*(j+2)] = 0;
	}
  }

  int n;
  
  while(cin>>n){
	
	for(int i=n-1;i>=0;--i){
	  if(arr[i]==1){
		cout<<i<<" ";
		break;
	  }
  }

	for(int i=n+1;i<=80000;++i){
	  if(arr[i]==1){
		cout<<i<<endl;
		break;
	  }
	}
	
  }	
}

