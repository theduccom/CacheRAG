#include<stdio.h>
#include<string.h>

int main(){
	char ss[2000],out[2000],temp[2000];
	int i,j,k;
	
	while(NULL!=fgets(ss,1999,stdin)){
		j=0;
		for(i=0;i<1800;i++){
			if(ss[i]=='a' && ss[i+1]=='p' && ss[i+2]=='p' && ss[i+3]=='l' && ss[i+4]=='e'){
				out[j]='p';
				out[j+1]='e';
				out[j+2]='a';
				out[j+3]='c';
				out[j+4]='h';
				out[j+5]='@';
				j+=6;
				i+=4;
				continue;
			}
			out[j]=ss[i];
			++j;
		}
		j=0;
		for(i=0;i<1800;i++){
			if(out[i]=='p' && out[i+1]=='e' && out[i+2]=='a' && out[i+3]=='c' && out[i+4]=='h' && out[i+5]!='@'){
				ss[j]='a';
				ss[j+1]='p';
				ss[j+2]='p';
				ss[j+3]='l';
				ss[j+4]='e';
				j+=5;
				i+=4;
				continue;
			}
			ss[j]=out[i];
			++j;
		}
		j=0;
		
		while(0!=ss[j]){
			if(ss[j]=='@'){
				++j;
				continue;
			}
			if(ss[j]=='\n')break;
			printf("%c",ss[j]);
			++j;
		}
		printf("\n");
	}
	return 0;
}