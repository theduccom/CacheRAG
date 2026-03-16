#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  cin >> n;
  for( int i = 0; i < n; i++ ){
    int point = 0,runner = 0,out = 0;
    while(1){
      if(out == 3 ){
	out = 0;
	break;
      }
   
      string str;  cin >> str;
    
      if( str == "HIT" ){
	runner++;
	if( runner == 4){
	  point +=1;
	  runner--;
	}
      }else if( str == "HOMERUN" ){
	point += runner+1;
	runner = 0;
      }else if( str == "OUT"){
	out++;
	if( out == 3 ){
	  cout << point << endl; 
	}
      }
 
    }
  }
  return 0;
}