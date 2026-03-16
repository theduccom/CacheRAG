#include<iostream>
#include<string>
using namespace std;

int main(){
	bool F,S,T;
	int out,point;
	
	int i,j;
	
	int dataN,dataLoop;
	string E;
	
	cin>>dataN;
	for(dataLoop=0;dataLoop<dataN;dataLoop++){
	out=0;point=0;
	F=false;S=false;T=false;
	while(out!=3){
	 cin>>E;
	 if(E=="HIT"){
	  if(T){point++;}
	  T=S;S=F;F=true;
	 }else if(E=="HOMERUN"){
	  point++;
	  if(F){point++;F=false;}
	  if(S){point++;S=false;}
	  if(T){point++;T=false;}
	 }else{
	  out++;
	 }
	}
	cout<<point<<endl;
	}
	
	return 0;
}