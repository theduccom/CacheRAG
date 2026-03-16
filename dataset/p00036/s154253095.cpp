#include <iostream>
using namespace std;
char box[8][8];
char search(const int i,const int j){
	if(box[i][j+1]=='1' && box[i+1][j]=='1' && box[i+1][j+1]=='1') return('A'); 
	else if(box[i+1][j]=='1' && box[i+2][j]=='1' && box[i+3][j]=='1') return('B') ;
	else if(box[i][j+1]=='1' && box[i][j+2]=='1' && box[i][j+3]=='1') return('C') ;
	else if(box[i+1][j]=='1' && box[i+1][j-1]=='1' && box[i+2][j-1]=='1') return('D');
	else if(box[i][j+1]=='1' && box[i+1][j+1]=='1' && box[i+1][j+2]=='1') return('E');
	else if(box[i+1][j]=='1' && box[i+1][j+1]=='1' && box[i+2][j+1]=='1') return('F');
	else if(box[i][j+1]=='1' && box[i+1][j]=='1' && box[i+1][j-1]=='1') return('G'); 
	else return('0');
}

int main(){
	while(cin>>box[0][0]){
		for(int i=1;i<8;i++) cin >> box[0][i] ;
	char ans='0';bool flag=false;
	for(int i=1;i<8;i++)
		for(int j=0;j<8;j++) cin >> box[i][j] ;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(box[i][j]=='0') continue;
			if(ans=='0' && box[i][j]=='1') ans=search(i,j);
		};
	};
	cout << ans << '\n' ;
	};
}