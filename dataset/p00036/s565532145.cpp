#include <iostream>

using namespace std;

int main(){
  char m[8][8];
  while(cin>>m[0]){
    for(int i=1;i<8;i++) cin>>m[i];
    int p[4];
    int n=0;
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
	if(m[i][j]=='1') p[n++]=i*8+j;
      }
      if(n==4) break;
    }
    int x=p[1]+p[2]+p[3]-3*p[0];
    switch(x){
    case 18:
      cout<<"A";
      break;
    case 48:
      cout<<"B";
      break;
    case 6:
      cout<<"C";
      break;
    case 30:
      cout<<"D";
      break;
    case 20:
      cout<<"E";
      break;
    case 34:
      cout<<"F";
      break;
    case 16:
      cout<<"G";
      break;
    }
    cout<<endl;
  }
  return 0;
}