//12
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
  for(double seq[10];cin>>seq[0];){
    double sum=seq[0];
    for(int i=1;i<10;i++){
      if(i%2!=1){
	seq[i]=seq[i-1]/3;
      }else{
	seq[i]=seq[i-1]*2;
      }
      sum+=seq[i];
    }
    cout<<fixed<<setprecision(6)<<sum<<endl;
  }
  return 0;
}