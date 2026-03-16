#include <iostream>
#include <vector>
using namespace std;

#define N 10001
vector<int> prime(N);

int main(){
  int n;
  prime[0] = 1;
  prime[1] = 1;
  vector<int> prm;

  for(int i=2; i<N; i++){
    if(prime[i]==0){
      prm.push_back(i);
      for(int j=i*i; j<N; j+=i)
	prime[j]=1;
    }
  }

  while(cin >> n && n!=0){
    for(int i=prm.size()-1; i>0; i--){
      if(prm[i] <= n && prm[i] == prm[i-1]+2){
	cout << prm[i-1] << " " << prm[i] << endl;
	break;
      }	
    }
  }

  return 0;
}