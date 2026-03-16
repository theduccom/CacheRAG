#include<bits/stdc++.h>
using namespace std;
int main(){
	char input[8][8];
	int line;
	int zero;
	int tmp;
	bool flag;
	bool is,end;
	while(gets(input[0])){
		for(int i=1;i<8;i++)
			gets(input[i]);
		line=0;
		zero=0;
		flag=false;
		end=false;
		for(int i=0;i<8;i++){
			is=false;
			for(int j=0;j<8;j++){
				if(input[i][j]=='1'){
					is=true;
					flag=true;
					if(zero)
						end=true;
				}
				if(flag&&!end){
					if(input[i][j]=='0')
						zero++;
				}	
			}
			if(is)
				line++;
		}
		if(line==4)
			cout<<"B"<<endl;
		else if(line==1)
			cout<<"C"<<endl;
		else if(line==2){
			if(zero==6)
				cout<<"A"<<endl;
			else if(zero==7)
				cout<<"E"<<endl;
			else if(zero==5)
				cout<<"G"<<endl;
		}else{
			if(zero==7)
				cout<<"F"<<endl;
			else
				cout<<"D"<<endl;
		}
		getchar();
	}
} 