#include<stdio.h>

int main(){
	char ss[1100],ho[]="Hoshino";
	int i,j,flag,n;
	scanf("%d ",&n);
	while(n--){
		fgets(ss,sizeof(ss),stdin);
		
		for(i=0;i<1006;i++){
			
			flag=0;
			for(j=0;j<7;j++){
				if(ss[i+j]!=ho[j])flag=1;
			}
			if(flag==0)ss[i+j-1]='a';
		}
		
		printf("%s",ss);
	}
	return 0;
}