#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

unsigned long fact0(int n);
int main(){
  int n;
  vector<int> array;
  while(1){
    cin>>n;
    if(!n) break;
    array.push_back(n);
  }

  for( int i=0;i<array.size();i++ ){
    cout<<fact0(array[i])<<endl;
  }
  return 0;
}

unsigned long fact0(int n){
  unsigned long ten=0,five=0,two=0;
  for( int i=1;i<=n;i++ ){
    if( !(i%2) ){
      int num=i;
      while( !(num%2) ){
	num/=2;
	two++;
      }
    }
    if( !(i%5) ){
      int num=i;
      while( !(num%5) ){
	num/=5;
	five++;
      }

    }
  }

  ten=(five<two?five:two);
  return ten;
}