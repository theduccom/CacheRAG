#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

  int n;

  int not_prime[51000];
  int ans;

  int idx;

  
  not_prime[0]=not_prime[1]=1;

  for(int i=2;i<=50000;i++) not_prime[i]=0;

  for(int i=2;i<=sqrt(50000);i++) {

    if(not_prime[i]==0) {

      for(int j=2*i;j<=50000;j+=i) {

	not_prime[j]=1;

      }

    }

  }

  //for(int i=0;i<=50000;i++) cout << not_prime[i] << " ";

  while(1) {

    cin >> n;

    if(n==0) break;

    ans=0;

    for(int i=2;i<=n/2;i++) {

      if(not_prime[i]==0 && not_prime[n-i]==0) ans++;

    }
  
    cout << ans << endl;

  }

  return 0;

}

  