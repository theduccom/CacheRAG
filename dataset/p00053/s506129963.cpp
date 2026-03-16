#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int n;

  int not_prime[104730];
  int s;

  int count;

  not_prime[0]=not_prime[1]=1;

  for(int i=2;i<=104730;i++) not_prime[i]=0;

  for(int i=2;i<=sqrt(104730);i++) {

    if(not_prime[i]==0) {

      for(int j=2*i;j<=104730;j+=i) {

	not_prime[j]=1;

      }

    }

  }

  //for(int i=2;i<104730;i++) if(not_prime[i]==0) cout << i << endl;

  while(cin >> n) {

    if(n==0) break;

    s=0;
    count=0;

    for(int i=2;count<n;i++) {

      if(not_prime[i]==0) {

	s+=i;
	count++;

      }

    }

    cout << s << endl;

  }
  
  return 0;

}

  