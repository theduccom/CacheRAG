#include <iostream>
using namespace std;


#define N 50000

int main(){
    int n;

    bool is_prime[N];
    is_prime[0] = is_prime[1] = false;
    for(int i=2; i<N;i++){
      is_prime[i] = true;
    }
    for(int i=2; i*i<N; i++){
      if(is_prime[i]){
        for(int j=i*i;j<N; j+=i){
          is_prime[j] = false;
        }
      }
    }


    while(1){
      int counter = 0;
      cin >> n;
      if(n == 0)
        break;
      if(cin.eof())
        break;
      int i=0;
      while(i <= n/2){
        if(is_prime[n-i] && is_prime[i])
          counter++;
        i++;
      }
        cout << counter << endl;
      }

    return 0;
}

