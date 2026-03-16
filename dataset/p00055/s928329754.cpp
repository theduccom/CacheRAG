#include<iostream>
#include<iomanip>
using namespace std;


main(){


  
  double a=0.0;
  while( cin >> a){
    double sum=a;

    for(int j=2;j<=10;j++){
      if(j%2==0){
	a*=2;
	sum+=a;
      }
      else{
	a/=3;
	sum+=a;
      }

    }
    cout<<setprecision(10);///////////ツ青クツ度ツづーツ１ツ０ツ個づ可指ツ津ィ
    cout << sum << endl;
  }


  return 0;
}