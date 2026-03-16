#include<iostream>
using namespace std;

int main(){
  int a,b;
  bool f,g;

  g = true;
  while(1){
    cin >> a >> b;
    if(!a && !b)break;

    if(!g)cout << endl;

    f = false;
    for(int i=a;i<=b;i++){
      if( !(i%400) ){
	cout << i << endl;
	f = true;
      }else if( !(i%100) ){
      }else if( !(i%4) ){
	cout << i << endl;
	f = true;
      }
    }
    if(!f)cout << "NA" << endl;
    g = false;
  }
}