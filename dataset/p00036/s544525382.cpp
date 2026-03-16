#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int field[8][8],f = 0;
	for(;;){
		for(int i=0; i<8; i++){
			for(int l=0; l<8; l++){
				if(scanf("%1d",&field[l][i]) == EOF){f = 1;break;}
			}
			if(f == 1){break;}
		}
		if(f == 1){break;}
		for(int i=0; i<8; i++){
			for(int l=0; l<8; l++){
				if(field[l][i]){
					if(field[l][i+1] == 1 && field[l+1][i] == 1 && field[l+1][i+1] == 1){cout<<"A"<<endl;break;}
					else if(field[l][i+1] == 1 && field[l][i+2] == 1 && field[l][i+3] == 1){cout<<"B"<<endl;break;}
					else if(field[l+1][i] == 1 && field[l+2][i] == 1 && field[l+3][i] == 1){cout<<"C"<<endl;break;}
					else if(field[l][i+1] == 1 && field[l-1][i+1] == 1 && field[l-1][i+2] == 1){cout<<"D"<<endl;break;}
					else if(field[l+1][i] == 1 && field[l+1][i+1] == 1 && field[l+2][i+1] == 1){cout<<"E"<<endl;break;}
					else if(field[l][i+1] == 1 && field[l+1][i+1] == 1 && field[l+1][i+2] == 1){cout<<"F"<<endl;break;}
					else if(field[l+1][i] == 1 && field[l][i+1] == 1 && field[l-1][i+1] == 1){cout<<"G"<<endl;break;}
				}
			}
		}
	}
	return 0;
}