#include<stdio.h>

#define MG 210000000

 main(){
	
	int n,m;
	int i,j;
	int a[40],b[40],c[40],d[40];
	int e,f,g=MG,h,l;
	int k[21][21],flg[21],dk[21],dkn;
	int flg2[21],dk2[21];
	
	scanf("%d",&n);
	
	scanf("%d",&m);
	
	for(i=0;i<=n;i++){
		dk[i]=MG;
		flg[i]=0;
		dk2[i]=MG;
		flg2[i]=0;
		for(j=0;j<=n;j++){
			k[i][j]=MG;
		}
	}
	
	for(i=1;i<=m;i++){
		scanf("%d,%d,%d,%d",&a[i],&b[i],&c[i],&d[i]);
	}
	scanf("%d,%d,%d,%d",&e,&f,&dkn,&h);
	
	

	
	for(i=1;i<=m;i++){
		k[a[i]][b[i]]=c[i];
		k[b[i]][a[i]]=d[i];
	}
	

	dk[e]=0;
	
	for(i=0;i<=n;i++){
		g=MG;
		for(j=0;j<=n;j++){
			if(flg[j]==0 && dk[j]<g){
				g=dk[j];
				l=j;
			}
		}
		
		flg[l]=1;
		
		for(j=0;j<=n;j++){
			if(dk[l]+k[l][j]<dk[j]){
				dk[j]=dk[l]+k[l][j];
			}
		}
	}
	
	dk2[f]=0;
	
	for(i=0;i<=n;i++){
		g=MG;
		for(j=0;j<=n;j++){
			if(flg2[j]==0 && dk2[j]<g){
				g=dk2[j];
				l=j;
			}
		}
		
		flg2[l]=1;
		
		for(j=0;j<=n;j++){
			if(dk2[l]+k[l][j]<dk2[j]){
				dk2[j]=dk2[l]+k[l][j];
			}
		}
	}
	
	dkn=dkn-(h+dk[f]+dk2[e]);
	
	printf("%d\n",dkn);
	
	return 0;
	
}