#include<stdio.h>
int main(void)
{
	int a,s,d[9],f,g,h,i,j,z;
	scanf("%d",&a);
	while(a!=0){
		for(i=1;i<=8;i++){
			d[i]=0;
		}
		g=0;
		h=0;
		scanf("%d",&s);
		g=10;
		for(i=1;i<=8;i++){
			d[i]=s%g;
			s=s/10;

		}
		for(i=1;i<=8;i++){
			for(j=i+1;j<=8;j++){
				if(d[i]<d[j]){
					f=d[i];
					d[i]=d[j];
					d[j]=f;
				}
			}
		}
		z=1;
		for(i=8;i>=1;i--){
			h=d[i]*z+h;
			z*=10;
		}
		z=1;
		for(i=1;i<=8;i++){
			g=d[i]*z+g;
			if(i==1){
				g=g-10;
			}
			z*=10;
	//		printf("%d = %d\n",i,g);

		}
	//	printf("g = %d h = %d\n",g,h);
	printf("%d\n",h-g);
	a--;
	}
	return 0;
}