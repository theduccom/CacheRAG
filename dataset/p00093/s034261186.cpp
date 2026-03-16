#include<iostream>
using namespace std;

int main(){

  int a,b,d=0;

  while(cin >> a >> b){

    int count=0;

    if(a==0 && b==0)break;
    if(d==1) cout << endl;

    for(int i=a;i<=b;i++){
      if(i%400==0){
	cout << i << endl;
	count=1;
      }

      else if(i%100!=0 && i%4==0){
	cout << i << endl;
	count=1;
      }
    }

    if(count==0) cout << "NA" << endl;

    d=1;
  }
}