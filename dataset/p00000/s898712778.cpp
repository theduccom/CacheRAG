#include<iostream>
using namespace std;

int main(){

int i,j,p;

for(i=1; i<10; i++){
  for(j=1; j<10; j++){
    p=i*j;
    cout << i << "x" <<j << "=" << p <<"\n";
  }
}

    return 0;
}