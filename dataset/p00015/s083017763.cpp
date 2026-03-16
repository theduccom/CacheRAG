#include <stdio.h>
#include <string.h>
 
int main(void) {
    char a[200],b[200],result[200],temp[200];
    int ketaagari;
    int i,j;
    int max;
    char in;
    int overflow;
    int count,kazu;
    scanf("%d",&kazu);
    for(count=0;count<kazu;count++) {
        for(i=0;i<200;i++) {
            a[i]=0;b[i]=0;
        }
        i=0;
        overflow=0;
    	
    	scanf(" %s ",temp);
    	i=strlen(temp);
    	if(i>80)overflow=1;
        else for(j=0;j<i;j++)a[j]=temp[i-j-1]-'0';
    	
    	scanf(" %s ",temp);
    	i=strlen(temp);
    	if(i>80)overflow=1;
    	else for(j=0;j<i;j++)b[j]=temp[i-j-1]-'0';
 
        for(i=0,ketaagari=0,max=0;i<80;i++) {
            result[i]=(a[i]+b[i]+ketaagari)%10;
            ketaagari=(a[i]+b[i]+ketaagari)/10;
            if(result[i]!=0)max=i;
        }
        if(ketaagari)overflow=1;

    	if(overflow==0) {
            for(i=max;i>=0;i--)printf("%d",result[i]);
            printf("\n");
        } else printf("overflow\n");
    }
    return 0;
}