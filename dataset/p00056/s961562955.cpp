#include<iostream>
using namespace std;

int main(){

  long long int a[1000000] = {0};

  a[0] = 1;
  a[1] = 1;

  for(long long int i=2;i*i<1000000;i++){
    if(a[i] == 0){
      for(long long int j=i+i;j<1000000;j+=i) a[j] = 1;
    }
  }

  int n,z = 0;

  while(cin >> n, n){
    z = 0;

    for(int i=2;i<=n/2;i++){
      if(a[i] == 0 && a[n-i] == 0) z++;
    }

    cout << z << endl;

  }
}