#include<iostream>
#include<string>
using namespace std;

int hoge(int w);
int getKetasu(int n);

int main(){
	int w;
	
	while(1){
	 cin>>w;
	 if(w==0){break;}
	 hoge(w);
	}
	
	return 0;
}

int hoge(int w){	//?????£???????????????
	int t[100][100];
	int x,y,i;
	
	for(y=0;y<w;y++){
	 for(x=0;x<w;x++){
	  cin>>t[x][y];
	 }
	}
	
	for(y=0;y<w;y++){
	 t[w][y]=0;
	 for(x=0;x<w;x++){
	  t[w][y]+=t[x][y];
	 }
	}
	for(x=0;x<=w;x++){
	 t[x][w]=0;
	 for(y=0;y<w;y++){
	  t[x][w]+=t[x][y];
	 }
	}
	
	for(y=0;y<=w;y++){
	 for(x=0;x<=w;x++){
	  for(i=getKetasu(t[x][y]);i<5;i++){cout<<" ";}
	  cout<<t[x][y];
	 }
	 cout<<endl;
	}
	
	return 0;
}

int getKetasu(int n){	//?????°?????????
	if(n<10){
	 return 1;
	}else if(n<100){
	 return 2;
	}else if(n<1000){
	 return 3;
	}else if(n<10000){
	 return 4;
	}else{
	 return 5;
	}
}