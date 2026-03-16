#include<iostream>
#define LEG 101

using namespace std;

int main(void){

	char str[101]={'\0'},decoStr[101]={'\0'};
	
	while(cin>>str){
		
		for(int i=0,j=0;j<101;){
			
			if(str[i]=='@'){
				
				for(int k=j;j<(k+(str[i+1]-'0'));j++){
					decoStr[j]=str[i+2];
				}
				
				i=i+3;
			}
			else{
				decoStr[j]=str[i];
				
				j++;
				i++;
			}
		}
		cout<<decoStr<<endl;
		
		fill(str,str+LEG,'\0');
		fill(decoStr,decoStr+LEG,'\0');
	}
}