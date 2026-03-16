#include<iostream>
using namespace std;


int conv(char c){
  switch(c){
    case 'A':return 0;
    case 'B':return 1;
    case 'C':return 2;
  }
  return 1;
}

int main(){
  bool b[3];
  b[0] = 1;
  b[1] = 0;
  b[2] = 0;
  string s;
  while(cin>>s){
    int swap1,swap2;
    swap1 = conv(s[0]);
    swap2 = conv(s[2]);
    swap(b[swap1],b[swap2]);
  }
  int ans = 0;
  for(int i=0;i<3;i++){
    if(b[i])ans = i;
  }
  switch(ans){
    case 0:
      cout<<"A"<<endl;
      break;
    case 1:
      cout<<"B"<<endl;
      break;
    case 2:
      cout<<"C"<<endl;
      break;
  }

}