//参考(http://algorithms.blog55.fc2.com/blog-category-6.html)
#include<cstdio>

using namespace std;

int ka[1001],wei[1001],data[1001][1001];
int main(void){
	int w,n,set=0,maxw;
	int i,j,z;

	while(1){
		scanf("%d",&w);
		if(w==0)	break;
		
		maxw=0;
		set++;
		//初期化
		for(i=0;i<1001;i++){
			ka[i]=0;
			wei[i]=0;
			for(j=0;j<1001;j++)	data[i][j];
		}

		//入力
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			scanf("%d,%d",&ka[i],&wei[i]);
		}
		
		//処理
		for(i=1;i<=n;i++){
			for(j=1;j<=w;j++){
				if(j<wei[i])	data[i][j]=data[i-1][j];
				else{
					if(data[i-1][j] < data[i-1][j-wei[i]]+ka[i]){
						data[i][j]=data[i-1][j-wei[i]]+ka[i];
					}
					else{
						data[i][j]=data[i-1][j];
					}
				}
			}
		}
		i--;
		j--;
		for(z=j-1;z>0;z--){
			if(data[i][j]==data[i][z])	j=z;
		}
		while(1){
			if(data[i][j]==0)	break;
			if(data[i][j]==data[i-1][j])	i--;
			else{
				maxw+=wei[i];
				j=j-wei[i];
				i--;
			}
		}
		printf("Case %d:\n%d\n%d\n",set,data[n][w],maxw);
	}

	return 0;
}