#include<stdio.h>

int main(){
char C[10];
char ch[9][9]={};
int x=0,y=0;
bool f=true;
while(scanf("%s",C)!=EOF){
	bool F=true;
	for(int i=0;i<8;i++)
		{ch[0][i]=C[i];if(ch[0][i]=='1'&&F==true){x=i;y=0;F=false;}
	}
for(int i=1;i<8;i++){
	scanf("%s",C);
for(int j=0;j<9;j++)
{char cc;
	//if(j==8)scanf("%c",&cc);
ch[i][j]=C[j];
if(ch[i][j]=='1'&&F==true){x=j;y=i;F=false;}
if(ch[i][j]==EOF)f=false;}
}

	

if(ch[y][x+1]=='1'&&ch[y+1][x]=='1'&&ch[y+1][x+1]=='1')printf("A\n");

if(ch[y+1][x]=='1'&&ch[y+2][x]=='1'&&ch[y+3][x]=='1')printf("B\n");

if(ch[y][x+1]=='1'&&ch[y][x+2]=='1'&&ch[y][x+3]=='1')printf("C\n");

if(ch[y+2][x-1]=='1'&&ch[y+1][x]=='1')printf("D\n");

if(ch[y][x+1]=='1'&&ch[y+1][x+2]=='1')printf("E\n");

if(ch[y+1][x]=='1'&&ch[y+2][x+1]=='1')printf("F\n");

if(ch[y][x+1]=='1'&&ch[y+1][x-1]=='1')printf("G\n");
/*
if(f==false)break;
}*/
}
return 0;
}