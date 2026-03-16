#include<iostream>
#include<vector>
using namespace std;

int main(){
  char ans;
  char right,left;
  
  ans = 'A';
  
  while(cin >> left >> right >> right){
    //cout << "now no is " << left <<":"<< right <<endl;
    
    if(ans=='A' && (right=='A'||left=='A')){
      
      //cout << "frgA" << endl;
      
      if(right!='A'){
	//cout << "frgA1=" << right << endl;
	  ans = right;
	}else{
	//cout << "frgA2" << endl;
	  ans = left;
	}
    }else if(ans=='B' && (right=='B'||left=='B')){
      if(right!='B'){
	    ans = right;
	  }else{
	    ans = left;
	  }
    }else if(ans=='C' && (right=='C'||left=='C')){
      if(right!='C'){
	ans = right;
      }else{
	ans = left;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
	  
	  
	  
	  

