#include<iostream>

using namespace std;


int main(){
  int a,b,i,j;
  cin >> a >> b;
   while(a!=0 || b!=0){
    j=0;
    for(i=1;i<=3000;i++){
      if(i>=a && i<=b && i%4==0){
	if( (i%100==0 && i%400==0)  || i%100!=0 ){
	  j++;
	  cout << i << endl;
	}
      }
    }
    if(j==0){
      cout << "NA" <<endl;
    }
    
    cin >> a >> b;
    if(a==0&&b==0)
      break;

    cout << endl;
  } 

}