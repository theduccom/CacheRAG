#include<iostream>
#include<string>
#include<cmath>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
int main(){
  int t=0,h=0;
  int a,b,c;
  char d;
  while(cin>>a>>d>>b>>d>>c){
    if(c==hypot(a,b))t++;
	if(a==b)h++;
  }
  cout<<t<<endl<<h<<endl;
}