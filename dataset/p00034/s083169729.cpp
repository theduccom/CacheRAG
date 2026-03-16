#include<stdio.h>

int main(void){

	int k[20]={0},i=0,traina=0,trainb=0,sum=0,dec=0,stoped;
	double t=0,x=0;					//x=trainaÌÚ®£AtÍÔ
	
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&k[0],&k[1],&k[2],&k[3],&k[4],&k[5],&k[6],&k[7],&k[8],&k[9],&traina,&trainb) != EOF){
	
		//scanf("%d %d",&traina,&trainb);	//ñÔ¬x
		dec=0;
		sum=0;
		stoped=0;
		
		for(i=0;i<10;i++){				//SÌÌ·³
			sum=k[i]+sum;
		}
		
		dec=traina+trainb;		//l1=v1t;l2=v2t;l=l1+l2;l/(v1+v2)=t;l=v1t+v2t lÍÚ®£AtÍÔÂ©é¶©ñ
	
		t=(double)sum/dec;	//·êá¤Ô
		x=(double)traina*t;	//·êá¢Êu
		
		//printf("sum=%d dec=%d x=%f t=%f\n",sum,dec,x,t);														
		
		
		for(i=0;i<10;i++){														
			if(stoped>=x){
				break;
			}
			stoped=k[i]+stoped;
		}
			
		printf("%d\n",i);
	}
	return 0;
}