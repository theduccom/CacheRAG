#include<iostream>
using namespace std;

int main(){
	int w,h,x,y;
	char tile[100][100];
	bool use[100][100];
	bool flg;
	
	while(1){
	 cin>>h>>w;
	 if(w==0 && h==0){break;}
	 for(y=0;y<h;y++){
	  for(x=0;x<w;x++){
	   cin>>tile[x][y];
	   use[x][y]=false;
	  }
	 }
	 
	 x=0;y=0;flg=true;
	 do{
	  if(use[x][y]){cout<<"LOOP"<<endl;break;}
	  use[x][y]=true;
	  switch(tile[x][y]){
		case '.':
		flg=false;
		cout<<x<<" "<<y<<endl;
		break;

		case '>':
		x+=1;
		break;

		case '<':
		x-=1;
		break;

		case '^':
		y-=1;
		break;

		case 'v':
		y+=1;
		break;
	  }
	 }while(flg);
	}
}