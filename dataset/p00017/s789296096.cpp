#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){

  //  string x;
  char x[100];



  while(gets(x)){
    //  cin >> x;


    bool is = true;
    if(strlen(x) >= 3){
      for(int i = 0; i < 30 ; i++){
	//the 
	for(int j = 0; j <= strlen(x)-3; j++){
	  if(is && x[j] =='t' && x[j+1] == 'h' && x[j+2] == 'e'){
	    is = false;
	    break;
	  }
	}
	// this or that
	if(strlen(x) >= 4){
	  for(int j = 0; j <= strlen(x)-4; j++){
	    if(is && x[j] =='t' && x[j+1] == 'h' && x[j+2] == 'a' && x[j+3] =='t' ){
	      is = false;
	      break;
	    }
	    if(is && x[j] =='t' && x[j+1] == 'h' && x[j+2] == 'i' && x[j+3] =='s' ){
	      is = false;
	      break;
	    }
	  }
	}
	// increment
	if(is == false) break; 
	for(int j = 0; j < strlen(x) ; j++){
	  if(x[j] == 'z') x[j] = 'a';
	  else if(x[j] >= 'a' && x[j] < 'z') x[j]++;
	}
      }
    
      if(is == false)	
	cout << x << endl;
    }
  }
  return 0;
}