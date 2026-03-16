#include<iostream>
#include<string>
using namespace std;
string str[10]; 
void ans(int i,int k){
	if(str[i][k+1] == '1' && str[i+1][k+1] == '1'&& str[i+1][k] == '1' ){
		cout << "A" << endl;  
		} else if(str[i+1][k] == '1' && str[i+2][k] == '1'&& str[i+3][k] == '1' ){
		cout << "B" << endl; 
		} else if(str[i][k+1] == '1' && str[i][k+2] == '1'&& str[i][k+3] == '1' ){
		cout << "C" << endl;  
		} else if(str[i+1][k] == '1' && str[i+1][k-1] == '1'&& str[i+2][k-1] == '1' ){
		cout << "D" << endl; 
		} else if(str[i][k+1] == '1' && str[i+1][k+1] == '1'&& str[i+1][k+2] == '1' ){
		cout << "E" << endl; 
		} else if(str[i+1][k] == '1' && str[i+1][k+1] == '1'&& str[i+2][k+1] == '1' ){
		cout << "F" << endl;  
		} else 	{cout << "G" << endl; }

}

int main(){
	
	while(1){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++)str[i][j]=0;
	}
	for(int i =0;i<8;i++)
	if(!(cin>>str[i]))return 0;
	
	
	for(int i=0;i<64;i++)
	if(str[i/8][i%8] == '1'){
	ans(i/8,i%8);
	break;
	}

	
	}
	
}