#include<iostream>
using namespace std;

int main(){
  int n;
  while(true){
    cin>>n;
    if(n==0){
      break;
    }
    int m[n],e[n],j[n],me[n],total[n];
    for(int i=0;i<n;i++){
      cin>>m[i]>>e[i]>>j[i];
      me[i]=m[i]+e[i];
      total[i]=m[i]+e[i]+j[i];
    }
    for(int k=0;k<n;k++){
      if(m[k]==100||e[k]==100||j[k]==100||me[k]>=180||total[k]>=240){
	cout<<"A"<<endl;
      }else if(total[k]>=210){
	cout<<"B"<<endl;
      }else if(total[k]>=150&&m[k]>=80){
	cout<<"B"<<endl;
      }else if(total[k]>=150&&e[k]>=80){
	cout<<"B"<<endl;
      }else{
	cout<<"C"<<endl;
      }
    }
  }

    return 0;
}