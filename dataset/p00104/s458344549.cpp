#include<cstdio>
#include<cstring>


int main()
{
	int w,k,hyou[101][101],i,j,checki[101],check[101],l=0;
	memset(check,0,100*sizeof(int));
	char a;
	while(1)
	{
		scanf("%d%d",&w,&k);
		if(w==0)
			break;
		scanf("%c",&a);
		for(i=0;i<w;i++){
			for(j=0;j<=k;j++){
				scanf("%c",&a);
				if(a=='>')
					hyou[i][j]=1;
				else	if(a=='<')
					hyou[i][j]=2;
				else if(a=='v')
					hyou[i][j]=3;
				else if(a=='^')
					hyou[i][j]=4;
				else if(a=='.')
					hyou[i][j]=0;
				else 
					hyou[i][j]=6;
			}
		}
		/*for(i=0;i<w;i++){
			for(j=0;j<=k;j++){
				if(hyou[i][j]==6)
				printf("\n");
				else
					printf("%d",hyou[i][j]);
			}
		}*/
		i=0;
		j=0;
		while(hyou[i][j]!=5&&hyou[i][j]!=0){
			switch(hyou[i][j]){
			case 1:
				hyou[i][j]=5;
				j++;
				break;
			case 2:
				hyou[i][j]=5;
				j--;
				break;
			case 3:
				hyou[i][j]=5;
				i++;
				break;
			case 4:
				hyou[i][j]=5;
				i--;
				break;
			case 0:
				check[l]=i;
				checki[l]=j;
				break;
			case 5:
				check[l]=0;
				break;
			}
		}
		if(hyou[i][j]==0){
			check[l]=i;
			checki[l]=j;
		}
		if(hyou[i][j]==5)
			check[l]=-1;
		l++;
	}
	for(i=0;i<l;i++){
		if(check[i]==-1)
			printf("LOOP\n");
		else
			printf("%d %d\n",checki[i],check[i]);
	}
	return 0;
}