#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
struct Type{
  int side1,side2,diagonal;
  Type(int s1,int s2,int d):side1(s1),side2(s2),diagonal(d){}
};
int main(){
  vector<Type> data;

  int s1,s2,d;
  char c;
  while(cin>>s1>>c>>s2>>c>>d)
    data.push_back(Type(s1,s2,d));

  int dianum=0,rectnum=0;
  for(auto t:data){
    if(pow(t.side1,2)+pow(t.side2,2)==pow(t.diagonal,2)){
      if(t.side1==t.side2){
        dianum++;
      }else{
        rectnum++;
      }
    }else{
      if(t.side1==t.side2)dianum++;
    }
    
  }
  cout<<rectnum<<endl;
  cout<<dianum<<endl;
}