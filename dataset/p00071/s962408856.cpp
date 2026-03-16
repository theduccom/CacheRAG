#include<stdio.h>
char table[8][9];
void solve(int a,int b){
	table[a][b]='0';
	for(int i=1;i<=3;i++){
		if(a-i>=0&&table[a-i][b]=='1')solve(a-i,b);
		if(b-i>=0&&table[a][b-i]=='1')solve(a,b-i);
		if(a+i<8&&table[a+i][b]=='1')solve(a+i,b);
		if(b+i<8&&table[a][b+i]=='1')solve(a,b+i);
	}
	return ;
}
int main(){
	int a;
	scanf("%d",&a);
	int now=0;
	while(a--){
		int b,c;
		for(int i=0;i<8;i++)scanf("%s",table[i]);
		scanf("%d%d",&b,&c);
		solve(c-1,b-1);
		printf("Data %d:\n",++now);
		for(int i=0;i<8;i++)printf("%s\n",table[i]);
	}
}