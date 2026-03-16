#include <stdio.h>
#include <cctype>
int main(){
char ch[1500];
int i = 0;
while(1){
	i=0;
while(1){
    if(scanf("%c", &ch[i]) == EOF){
		return 0;
	}
    if ( ch[i] == '\n' ) break;
	i++;
}
i = 0;
while(1){

	if(islower(ch[i])){
		ch[i] = toupper(ch[i]);
	}	printf("%c",ch[i]);

	if ( ch[i] == '\n' ) break;
	i++;
}
}

}