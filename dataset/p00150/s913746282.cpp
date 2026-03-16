#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int n;

  int not_prime[11000];
  

  not_prime[0]=not_prime[1]=1;

  for(int i=2;i<=10000;i++) not_prime[i]=0;

  for(int i=2;i<=sqrt(10000);i++) {

    if(not_prime[i]==0) {

      for(int j=2*i;j<=10000;j+=i) {

	not_prime[j]=1;

      }

    }

  }

  while(1) {

    cin >> n;

    if(n==0) break;

    for(int i=n;i>=5;i--) {

      if(not_prime[i]==0 && not_prime[i-2]==0) {

	cout << i-2 << " " << i << endl;

	break;

      }

    }

  }

  return 0;

}