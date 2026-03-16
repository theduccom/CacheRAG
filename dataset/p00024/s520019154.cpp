#include<iostream>

using namespace std;



main(){
  double minv;
  while(cin >>minv){
    int i,ans=0;
    double t = minv/9.8;
    double y;
    y = 4.9*t*t;
    double tall;
    for(i=1;; i++){
      tall = 5*i-5;
      if(tall >= y){ans=i;break;}
    }

    cout << ans << endl;

    
  }





  return 0;
}