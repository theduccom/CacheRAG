#include<cstdio>

using namespace std;

int main(void){
	char in[12][12],data[10];
	int i,j,flag=0,out=0,y,x;

	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			in[i][j]='0';
		}
	}

	while(1){
		for(i=2;i<10;i++){
			if(scanf("%s",data)==EOF)	flag=1;
			if(flag==1)	break;
			for(j=0;j<8;j++){
				in[i][j+2]=data[j];
			}
		}
		if(flag==1)	break;

		for(i=2;i<10;i++){
			for(j=2;j<10;j++){
				if(in[i][j]=='1'){
					y=i;
					x=j;
					out=1;
					break;
				}
			}
			if(out==1)	break;
		}
		out=0;

		if(in[y][x+1]=='1' && in[y+1][x]=='1' && in[y+1][x+1]=='1')	printf("A\n");
		if(in[y+1][x]=='1' && in[y+2][x]=='1' && in[y+3][x]=='1')	printf("B\n");
		if(in[y][x+1]=='1' && in[y][x+2]=='1' && in[y][x+3]=='1')	printf("C\n");
		if(in[y+1][x-1]=='1' && in[y+1][x]=='1' && in[y+2][x-1]=='1')	printf("D\n");
		if(in[y][x+1]=='1' && in[y+1][x+1]=='1' && in[y+1][x+2]=='1')	printf("E\n");
		if(in[y+1][x]=='1' && in[y+1][x+1]=='1' && in[y+2][x+1]=='1')	printf("F\n");
		if(in[y][x+1]=='1' && in[y+1][x-1]=='1' && in[y+1][x]=='1')	printf("G\n");
	}

	return 0;
}