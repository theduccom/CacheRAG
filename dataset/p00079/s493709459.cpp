#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	double tyo[20][2],a,b,c,z,s;
	int n,i,j;
	
	s=0;
	n=0;
	while(~scanf("%lf,%lf",&tyo[n][0],&tyo[n][1])){
		++n;
	}
	
	for(i=1;i<n-1;i++){
		a=sqrt(pow(tyo[0][0]-tyo[i][0],2)+pow(tyo[0][1]-tyo[i][1],2));
		b=sqrt(pow(tyo[0][0]-tyo[i+1][0],2)+pow(tyo[0][1]-tyo[i+1][1],2));
		c=sqrt(pow(tyo[i+1][0]-tyo[i][0],2)+pow(tyo[i+1][1]-tyo[i][1],2));
		z=(a+b+c)/2;
		
		s+=sqrt(z*(z-a)*(z-b)*(z-c));
	}
	
	printf("%lf\n",s);
}