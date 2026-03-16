#include <iostream>
#include <string>
using namespace std;
int main(){
	int cnt=0,x,y;
	char zero;
	while(cin>>zero){
		char masu[8][8];
		cnt=0;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				if(i==0&&j==0){
					masu[0][0]=zero;
				}else{
					cin>>masu[i][j];
				}
				if(masu[i][j]=='1'&&cnt==0){
					x=i,y=j;
					cnt++;
				}
			}
		}
		if(masu[x][y+1]=='1'){
			if(masu[x][y+2]=='1'){
				cout<<"C"<<endl;
			}else if(masu[x+1][y]=='0'){
				cout<<"E"<<endl;
			}else if(masu[x+1][y+1]=='0'){
				cout<<"G"<<endl;
			}else{
				cout<<"A"<<endl;
			}
		}else{
			if(masu[x+1][y-1]=='1'){
				cout<<"D"<<endl;
			}else if(masu[x+1][y+1]=='1'){
				cout<<"F"<<endl;
			}else{
				cout<<"B"<<endl;
			}
		}
	}
	return 0;
}