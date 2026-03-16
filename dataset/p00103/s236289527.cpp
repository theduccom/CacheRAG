#include <iostream>
using namespace std;

int main(){
  int x;
  cin>>x;
  string s;
  string h="HIT";
  string home="HOMERUN";
  string o="OUT";
  
  for(int j=0;j<x;j++){
    int count=0;
    int point=0;
    int r=0;

 
    for(int i=0;i<100;i++){
      cin>>s;
 
      if(s==h){
	r++;
	if(r==4){
	  point++;
	  r--;
	}
      }

      if(s==home){
	point++;
	point+=r;
	r=0;
      }

      if(s==o){
	count++;
	if(count==3)break;
      }
    }
      cout<<point<<endl;

    
  }
  }

