#include<stdio.h>
#include<string.h>


int main(void){

	int i,n;
	char *p;
	char a[1002];
	char word[]="Hoshino";
	scanf("%d\n",&n);
	for(i = 0;i < n;i++){
        fgets(a,sizeof(a),stdin);
        while((p = strstr(a,word))!=NULL){
            p[6] = 'a';
        }
                printf("%s",a);

    }


return 0;
}