#include<stdio.h>


int main(){
	int n;
	int id[4000],cid;
	long long int price,num,sale[4000];
	bool f;
	int i,j,idcount;
	while(scanf("%d",&n),n){

		f=true;
		idcount=0;

		for(i=0;i<n;i++){
			scanf("%d %lld %lld",&cid,&price,&num);

			for(j=0;j<idcount;j++){
				if(id[j]==cid){
					sale[j]=sale[j]+price*num;
				}
			}

			if(j==idcount){
				id[idcount]=cid;
				sale[idcount]=price*num;
				idcount++;
			}

		}



		for(i=0;i<idcount;i++){
			if(sale[i]>=1000000){
				printf("%d\n",id[i]);
				f=false;
			}
		}
		if(f!=false)printf("NA\n");
	}
	return 0;
}