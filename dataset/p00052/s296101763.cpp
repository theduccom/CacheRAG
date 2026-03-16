#include <iostream>
inline void DPri(int n){
  std::cout<<n<<std::endl;
}
int recsion(int n,int a,int c){
  if(n==1)return c;
  int d=n;
  while(!(d%a)){
    if(!(d%a))d/=a,c++;
  }
  recsion(n-1,a,c);
}

int main(){
  int n;
  while(std::cin>>n){
    if(!n)break;
    int c=recsion(n,10,0),a=recsion(n,2,0)-c,b=recsion(n,5,0)-c,res=0;
    a>b?res+=(b+c):res+=(a+c);
    std::cout<<res<<std::endl;
  }
  return 0;
}