#include <iostream>

#define N 105000

using namespace std;

main(){
  bool data[N];
  for(int i=0;i<N;i++){
    if(i%2==0) data[i]=false;
    else data[i]=true;
  }
  data[1]=false;
  data[2]=true;

  for(int i=3;i<N;i+=2){
    if(data[i]){
      for(int j=i+i;j<N;j+=i){
	data[j]=false;
      }
    }
  }

  int ans[10000];
  for(int i=0, j=0;i<N;i++){
    if(data[i]){
      ans[j++]=i;
      if(j==10000) break;
    }
  }

  while(1){
    int n;
    cin >> n;
    if(n==0) break;

    long long sum=0;
    for(int i=0;i<n;i++){
      sum+=ans[i];
    }

    cout << sum << endl;
  }
  return 0;
}