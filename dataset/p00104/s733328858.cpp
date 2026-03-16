#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(void){
  int w,h;
  while(cin>>h>>w,h){
    string f[h];
    for(int i=0;i<h;i++){
      cin>>f[i];
    }	
    int x,y;
    x=y=0;
    while(true){
      if(f[y][x]=='p'){
	cout<<"LOOP"<<endl;
	break;
      }
      if(f[y][x]=='.'){
	cout<<x<<" "<<y<<endl;
	break;
      }
      if(f[y][x]=='>') {
	f[y][x]='p';x+=1;}
      if(f[y][x]=='<') {
	f[y][x]='p'; x-=1;}
      if(f[y][x]=='^') {
	f[y][x]='p'; y-=1;}
      if(f[y][x]=='v') {
	f[y][x]='p'; y+=1;}
    }
	
    	
  }
	
}