#include <iostream>

using namespace std;

main(){
  double a;
  while(cin >> a){
    double data[10];
    data[0]=a;
    for(int i=1;i<10;i++){
      if(i%2==1){
	data[i]=data[i-1]*2.0;
      }else{
	data[i]=data[i-1]/3.0;
      }
    }
    double ans=0.0;
    for(int i=0;i<10;i++) ans+=data[i];
    printf("%.8f\n", ans);
  }
  return 0;
}
    