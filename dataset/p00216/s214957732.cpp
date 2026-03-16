#include <iostream>
using namespace std;

int main(){
  int w,mo;
  while(cin >> w,w!=-1){
  	mo=1150;
  	if(w>10){
  		w-=10;
  		if(w>10){
  			mo+=1250;
  			w-=10;
  			if(w>10){
  				mo+=1400;
  				w-=10;
  				if(w>0) mo+=w*160;
  			}
  			else{
  				mo+=w*140;
  			}
  		}
  		else{
  			mo+=w*125;
  		}
  	}
  	cout << 4280-mo << endl;
  	}
	return 0;
}