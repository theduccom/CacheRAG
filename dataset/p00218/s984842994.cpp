#include<iostream>
using namespace std;

int main(){
  int i,n;
  int pm,pe,pj;
  char ans;

  while(1){
    cin >> n;
    if(!n)break;

    for(i=0;i<n;i++){
      cin >> pm >> pe >> pj;
      if(pm==100 || pe==100 || pj==100)ans = 'A';
      else if( (pm+pe)/2 >= 90 )ans = 'A';
      else if( (pm+pe+pj)/3 >= 80 )ans = 'A';
      else if( (pm+pe+pj)/3 >= 70 )ans = 'B';
      else if( (pm+pe+pj)/3 >= 50 && (pm>=80 || pe>=80) )ans = 'B';
      else ans = 'C';
      cout << ans << endl;
    }
  }
}