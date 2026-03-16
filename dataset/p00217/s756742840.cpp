#include<iostream>
using namespace std;

int main(){
  int n;
  while(cin>>n && n){
    int mp=0;
    int md=0;
    for(int i=0;i<n;i++){
      int p,d1,d2;
      cin>>p>>d1>>d2;
      if(md < d1+d2){
	mp=p;
	md=d1+d2;
      }
    }
    cout<<mp<<" "<<md<<endl;
  }
  return 0;
}