#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char a[800],b[800],wa[801],count;
	int N,i,ea,eb,c;
	
	scanf("%d",&N);
	while(N--){
		scanf(" %s ",a);
		scanf(" %s ",b);
		
		for(i=0;i<800;i++){
			if(a[i]=='\0')break;
		}
		ea=i;
		for(i=0;i<800;i++){
			if(b[i]=='\0')break;
		}
		eb=i;
		c=(ea<eb ? eb:ea);
		memset(wa,'0',sizeof(wa));
		wa[c+1]='\0';
		count=0;
		if(ea>eb){
			for(i=ea-1;i>=ea-eb;i--){
				wa[i+1]=a[i]-'0'+b[i-ea+eb]+count;
				count=0;
				if(wa[i+1]>=58){
					wa[i+1]=wa[i+1] - 10;
					count=1;
				}

			}
			
			for(i=ea-eb-1;i>=0;i--){
				wa[i+1]=a[i]+count;
				count=0;
				if(wa[i+1]>'9'){
					wa[i+1]=wa[i+1]-10;
					count=1;
				}
			}
		}else{
			for(i=eb-1;i>=eb-ea;i--){
				wa[i+1]=b[i]+a[i-eb+ea]+count-'0';
				count=0;
				if(wa[i+1]>=58){
					wa[i+1]=wa[i+1]-10;
					count=1;
				}

			}
			for(i=eb-ea-1;i>=0;i--){
				wa[i+1]=b[i]+count;
				count=0;
				if(wa[i+1]>'9'){
					wa[i+1]=wa[i+1]-10;
					count=1;
				}
			}
		}
		wa[0]=count+'0';
		if(wa[0]=='0'){
			for(i=0;i<=c;i++){
				wa[i]=wa[i+1];
			}
			c=c-1;
		}
		if(c>79){
			printf("overflow\n");
		}else{
			printf("%s\n",wa);
		}
	}
	return 0;
}