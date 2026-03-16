#include<iostream>
#include<algorithm>
using namespace std;

long int a[10001];

int main(){

  for(long int i=2;i*i<10001;i++){
    if( !a[i] ){
      for(long int j=i+i;j<10001;j+=i) a[j] = 1;
    }
  }

  a[0] = a[1] = 1;

  long int n;

  while(cin >> n, n){

    for(long int i=n;i>4;i--){
      if(a[i] == 0 && a[i-2] == 0){
	cout << i-2 << " " << i << endl;
	break;
      }
    }

  }

}