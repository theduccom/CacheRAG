#include<stdio.h>
int main()
{
	double f[50],m=0;
	int n=0;
	while(scanf("%lf",&f[n])!=EOF){
		n++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(f[i]-f[j]>m){
				m=f[i]-f[j];
			}
		}
	}
	printf("%.2lf\n",m);
	return 0;
}