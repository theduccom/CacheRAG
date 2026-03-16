#include<iostream>
#include<cmath>
using namespace std;
int main(){

  int a,b,c,n,r[10000];
  double d1,d2,d3,d4,e;
   
  while(1){
    
    cin >>a>>b>>c;
    
    if( a == 0 && b == 0 && c == 0 )break;
    
    d1=sqrt(a*a+b*b);
    d2=sqrt(b*b+c*c);
    d3=sqrt(a*a+c*c);
    d4=sqrt(d1*d1+c*c);

    cin >>n;

    for(int i=0 ; i < n ; i++){
      cin >>r[i];
    }
    
    for(int i=0 ; i < n ; i++){
      
      e=2*sqrt(2*r[i]*r[i]);
      
      if( d1 < 2*r[i] ){
	
	cout <<"OK"<<endl;
	
      }else if( d2 < 2*r[i] ){
	
	cout <<"OK"<<endl;
	
      }else if( d3 < 2*r[i] ){
      
	cout <<"OK"<<endl;
	
      }else if(d4 < 2*r[i] ){
	  
	cout <<"OK"<<endl;

      }else{
	
	cout <<"NA"<<endl;
      
      }
      
    }
    
  }
  return 0;
  
}