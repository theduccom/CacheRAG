#include<iostream>
using namespace std;
string str[8],tmp;
char ch;
int main(){
  while(cin>>str[0]){
    for(int i=1;i<8;i++)cin>>str[i];
    getline(cin,tmp);
    //11
    //11
    for(int i=0;i<7;i++){
      for(int j=0;j<7;j++){
	if(str[i][j]=='1'&&str[i+1][j]=='1'&&str[i][j+1]=='1'&&str[i+1][j+1]=='1'){
	  ch='A';
	}
      }
    }

    //1
    //1
    //1
    //1
    for(int i=0;i<5;i++){
      for(int j=0;j<8;j++){
	if(str[i][j]=='1'&&str[i+1][j]=='1'&&str[i+2][j]=='1'&&str[i+3][j]=='1')ch='B';
      }
    }
    
    //1111
    for(int i=0;i<8;i++){
      for(int j=0;j<5;j++){
	if(str[i][j]=='1'&&str[i][j+1]=='1'&&str[i][j+2]=='1'&&str[i][j+3]=='1')ch='C';
      }
    }
    
    //01
    //11
    //10
    for(int i=0;i<6;i++){
      for(int j=0;j<7;j++){
	if(str[i][j+1]=='1'&&str[i+1][j]=='1'&&str[i+1][j+1]=='1'&&str[i+2][j]=='1')ch='D';
      }
    }
    
    //110
    //011
    for(int i=0;i<7;i++){
      for(int j=0;j<6;j++){
	if(str[i][j]=='1'&&str[i][j+1]=='1'&&str[i+1][j+1]=='1'&&str[i+1][j+2]=='1')ch='E';
      }
    }
    
    //011
    //110
    for(int i=0;i<7;i++){
      for(int j=0;j<6;j++){
	if(str[i][j+1]=='1'&&str[i][j+2]=='1'&&str[i+1][j]=='1'&&str[i+1][j+1]=='1')ch='G';
      }
    }

    //10
    //11
    //01
    for(int i=0;i<6;i++){
      for(int j=0;j<7;j++){
	if(str[i][j]=='1'&&str[i+1][j]=='1'&&str[i+1][j+1]=='1'&&str[i+2][j+1]=='1')ch='F';
      }
    }

    cout<<ch<<endl;
  }
  return 0;
}