#include<cstdio>

using namespace std;

int main(void){
	char in[100];
	int i,j,size,ans,data[100],com,com2=0;

	for(i=0;i<100;i++)	data[i]=0;

	while(scanf("%s",in)!=EOF){
		for(i=0;i<100;i++){
			if(in[i]=='\0')	break;
		}
		size=i;
		for(i=0;i<100;i++)	data[i]=0;
		for(i=0;i<size;i++){
			if(in[i]=='I')	data[i]=1;
			if(in[i]=='V')	data[i]=5;
			if(in[i]=='X')	data[i]=10;
			if(in[i]=='L')	data[i]=50;
			if(in[i]=='C')	data[i]=100;
			if(in[i]=='D')	data[i]=500;
			if(in[i]=='M')	data[i]=1000;
		}
		
		ans=data[0];
		for(i=0;i<size;i++){
			if(data[i]>=data[i+1])	ans+=data[i+1];
			if(data[i]<data[i+1]){
				ans-=data[i];
				com=data[i];
				for(j=i+1;j<size;j++){
					com2+=data[j];
					if(data[j]<data[j+1])	break;
					i++;
				}
				ans+=com2-com;
				com2=0;
			}
		}
		printf("%d\n",ans);
	}

	return 0;
}