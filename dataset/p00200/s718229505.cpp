#include<stdio.h>

int d[100][100];
int s[100][100];
int dd[100][100];
int ss[100][100];
int main(){
	while(1){
	int a,b;
	scanf("%d%d",&a,&b);
	if(b==0)return 0;
	for(int i=0;i<b;i++)
		for(int j=0;j<b;j++){
			d[i][j]=99999999;
			dd[i][j]=99999999;
		}
	
	for(int i=0;i<a;i++){
		int m,n,o,p;
		scanf("%d%d%d%d",&m,&n,&o,&p);
		d[m-1][n-1]=o;
		d[n-1][m-1]=o;
		dd[m-1][n-1]=p;
		dd[n-1][m-1]=p;
	}
	int h=0;
	for(int i=0;i<b;i++){
		for(int j=0;j<b;j++){
			s[i][j]=j;
		}
	}
	while(1<<h<b-1){
		for(int i=0;i<b;i++){
			for(int j=0;j<b;j++){
				for(int k=0;k<b;k++){
					if(d[i][j]>d[k][j]+d[i][k]){
						d[i][j]=d[i][k]+d[k][j];
						s[i][j]=s[i][k];
					}
				}
			}
		}
		h++;
	}
	h=0;
	for(int i=0;i<b;i++){
		for(int j=0;j<b;j++){
			ss[i][j]=j;
		}
	}
	while(1<<h<b-1){
		for(int i=0;i<b;i++){
			for(int j=0;j<b;j++){
				for(int k=0;k<b;k++){
					if(dd[i][j]>dd[k][j]+dd[i][k]){
						dd[i][j]=dd[i][k]+dd[k][j];
						ss[i][j]=ss[i][k];
					}
				}
			}
		}
		h++;
	}
	
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		int m,n,o;
		scanf("%d%d%d",&m,&n,&o);
		if(o)printf("%d\n",dd[m-1][n-1]);
		else printf("%d\n",d[m-1][n-1]);
	}
	}
}