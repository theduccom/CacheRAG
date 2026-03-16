#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;

int dt[24][24];

int num=0;

bool checkA(int i,int j){
	if(dt[i+1][j]==1 && dt[i][j+1]==1 && dt[i+1][j+1]==1 && dt[i][j]==1)return true;
	else if(dt[i][j-1]==1 && dt[i+1][j-1]==1 && dt[i+1][j]==1 && dt[i][j]==1)return true;
	else if(dt[i-1][j]==1 && dt[i-1][j+1]==1 && dt[i][j+1]==1 && dt[i][j]==1)return true;
	else if(dt[i-1][j-1]==1 && dt[i][j-1]==1 && dt[i-1][j]==1 && dt[i][j]==1)return true;
	else return false;
}

bool checkB(int  i,int j){
	if(dt[i+1][j]==1 && dt[i+2][j]==1 && dt[i+3][j]==1 && dt[i][j]==1)return true;
	else if(dt[i-1][j]==1 && dt[i+1][j]==1 && dt[i+2][j]==1 && dt[i][j]==1)return true;
	else if(dt[i-2][j]==1 && dt[i-1][j]==1 && dt[i+1][j]==1 && dt[i][j]==1)return true;
	else if(dt[i-3][j]==1 && dt[i-2][j]==1 && dt[i-1][j]==1 && dt[i][j]==1)return true;
	else return false;
}

bool checkC(int i,int j){
	if(dt[i][j]==1){
		if(dt[i][j+1]==1 && dt[i][j+2]==1 && dt[i][j+3]==1)return true;
		else if(dt[i][j-1]==1 && dt[i][j+1]==1 && dt[i][j+2]==1)return true;
		else if(dt[i][j-2]==1 && dt[i][j-1]==1 && dt[i][j+1]==1)return true;
		else if(dt[i][j-3]==1 && dt[i][j-2]==1 && dt[i][j-1]==1)return true;
		else return false;
	}else return false;
}

bool checkD(int i,int j){
	if(dt[i][j]==1){
		if(dt[i+1][j]==1 && dt[i+1][j-1]==1 && dt[i+2][j-1]==1)return true;
		else if(dt[i-1][j]==1 && dt[i][j-1]==1 && dt[i+1][j-1]==1)return true;
		else if(dt[i][j+1]==1 && dt[i-1][j+1]==1 && dt[i+1][j]==1)return true;
		else if(dt[i-1][j]==1 && dt[i-1][j+1]==1 && dt[i-2][j+1]==1)return true;
		else return false;
	}else return false;
}

bool checkE(int i,int j){
	if(dt[i][j]==1){
		if(dt[i][j+1]==1 && dt[i+1][j+1]==1 && dt[i+1][j+2]==1)return true;
		else if(dt[i][j-1]==1 && dt[i+1][j]==1 && dt[i+1][j+1]==1)return true;
		else if(dt[i-1][j]==1 && dt[i-1][j-1]==1 && dt[i][j+1]==1)return true;
		else if(dt[i][j-1]==1 && dt[i-1][j-1]==1 && dt[i-1][j-2]==1)return true;
		else return false;
	}else return false;
}

bool checkF(int i,int j){
	if(dt[i][j]==1){
		if(dt[i+1][j]==1 && dt[i+1][j+1]==1 && dt[i+2][j+1]==1)return true;
		else if(dt[i-1][j]==1 && dt[i][j+1]==1 && dt[i+1][j+1]==1)return true;
		else if(dt[i][j-1]==1 && dt[i-1][j-1]==1 && dt[i+1][j]==1)return true;
		else if(dt[i-1][j]==1 && dt[i-1][j-1]==1 && dt[i-2][j-1]==1)return true;
		else return false;
	}else return false;
}

bool checkG(int i,int j){
	if(dt[i][j]==1){
		if(dt[i][j+1]==1 && dt[i+1][j]==1 && dt[i+1][j-1]==1)return true;
		else if(dt[i][j-1]==1 && dt[i+1][j-1]==1 && dt[i+1][j-2]==1)return true;
		else if(dt[i-1][j]==1 && dt[i-1][j+1]==1 && dt[i][j-1]==1)return true;
		else if(dt[i][j+1]==1 && dt[i-1][j+1]==1 && dt[i-1][j+2]==1)return true;
		else return false;
	}else return false;
}

int main(){
	string ss;
	for(int i=0;i<24;i++){
			for(int j=0;j<24;j++){
				dt[i][j]=0;
			}
		}
	while(cin>>ss){
		for(int p=8;p<16;p++){
			dt[8][p]=ss[p-8]-'0';
		}
		for(int i=9;i<16;i++){
			cin>>ss;
			for(int j=8;j<16;j++){
				dt[i][j]=ss[j-8]-'0';
			}
		}
		for(int a=8;a<16;a++){
			for(int b=8;b<16;b++){
				if(!num){
					if(checkA(a,b)){cout<<"A"<<endl;num++;}
					else if(checkB(a,b)){cout<<"B"<<endl;num++;}
					else if(checkC(a,b)){cout<<"C"<<endl;num++;}
					else if(checkD(a,b)){cout<<"D"<<endl;num++;}
					else if(checkE(a,b)){cout<<"E"<<endl;num++;}
					else if(checkF(a,b)){cout<<"F"<<endl;num++;}
					else if(checkG(a,b)){cout<<"G"<<endl;num++;}
				}
			}
		}
		num=0;
		for(int i=0;i<24;i++){
			for(int j=0;j<24;j++){
				dt[i][j]=0;
			}
		}
	}
	return 0;
}