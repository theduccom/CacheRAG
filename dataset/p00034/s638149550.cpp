#include<cstdio>

int main(){
	
	double l[10],v[2];
	while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v[0],&v[1]) != EOF){
		int ans=1;
		double v_sum=v[0]+v[1];
		double l_sum=0;
		for(int i=0;i<10;i++)l_sum+=l[i];
		double s=l_sum/v_sum;
		double hit=v[0]*s;
		l_sum=0;
		for(int i=0;i<10;i++){
			l_sum+=l[i];
			if(l_sum>=hit)break;
			ans++;
		}
		printf("%d\n",ans);
	}
}