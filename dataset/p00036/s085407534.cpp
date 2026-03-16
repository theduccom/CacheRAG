#include <iostream>
#include <string>
using namespace std;
string s[8];
char f(){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(s[i][j]=='1'){
				if(i<5)
					if(s[i+3][j]=='1')return 'B';
				if(j<5)
					if(s[i][j+3]=='1')return 'C';
				if(i<6&&j>0)
					if(s[i+2][j-1]=='1')return 'D';
				if(i<7&&j<6)
					if(s[i+1][j+2]=='1')return 'E';
				if(i<6&&j<7)
					if(s[i+2][j+1]=='1')return 'F';
				if(i<7&&j>0)
					if(s[i+1][j-1]=='1'&&s[i][j+1])return 'G';
				return 'A';
			}
		}
	}
}

int main(){
	while(cin>>s[0]){
		for(int i=1;i<8;i++)cin>>s[i];
		cout <<f() <<endl;
	}
	return 0;
}