#include<iostream>
#include<string.h>
#define A 0
#define B 1
#define AB 2
#define O 3
using namespace std;

struct data{
	int num;
	char blood[2];
};

int main(){
	int num,judge[4]={0};
	char blood[3];
	
	while(scanf("%d,%s",&num,blood)!=EOF){
		if(blood[0]=='A'&& blood[1]=='B'){
			judge[AB]++;
		}
		else if(blood[0]=='A' && blood[1]=='\0'){
			judge[A]++;
		}
		else if(strcmp(blood,"B")==0){
			judge[B]++;
		}
		else if(strcmp(blood,"O")==0){
			judge[O]++;
		}
		
		memset(blood,'\0',sizeof(blood));
	}
	for(int i=0;i<4;i++){
		cout<<judge[i]<<endl;
	}
	return 0;
}