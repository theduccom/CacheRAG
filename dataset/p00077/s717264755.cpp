#include<stdio.h>
#include<math.h>

int main(){
	char ss[400],gen[300];
	int i,j,n,k;
	
	while(0<=scanf(" %s ",ss)){
		i=0;
		j=0;
		k=0;
		for(i=0;i<400;i++){
			if(ss[i]=='\0'){
				gen[j]=='\0';
				break;
			}
			if(ss[i]=='@'){
				n=ss[i+1]-'0';
				for(k=0;k<n;k++){
					gen[j+k]=ss[i+2];
				}
				i+=2;
				j+=n;
			}else{
				gen[j]=ss[i];
				++j;
			}
			gen[j]='\0';
//			printf("%s\n",gen);
		}
		printf("%s\n",gen);
	}
	return 0;
}