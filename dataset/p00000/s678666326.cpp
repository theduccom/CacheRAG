#include<iostream>
using namespace std;

void show(int a,int b){
cout<<a<<"x"<<b<<"="<<a*b<<endl;
}
int main(){
    
    for(int i = 1;i <= 9;i++){
      for(int j = 1;j<=9;j++){
        show(i,j);
}
}
    return 0;
}