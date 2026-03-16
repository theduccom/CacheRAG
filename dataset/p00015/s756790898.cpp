#include <stdio.h>
#include <string.h>

int chomp(char *str){
    int len = strlen(str);
    if(str[len-1]=='\n'){
        str[len-1] = '\0';
        len--;
    }
    return len;
}

int main(){
    int n;
    int i,j;
    int s1,s2,la,sm;
    char a1[102],a2[102],*pla,*psm,dummy[2];
    int carry,r;
    scanf("%d",&n);
    fgets(dummy,2,stdin);
    for(i=0;i<n;i++){
        fgets(a1,101,stdin);
        fgets(a2,101,stdin);
        s1 = chomp(a1);
        s2 = chomp(a2);
        if(s1>80||s2>80){
            printf("overflow\n");
            goto NEXT;
        }
        if(s1<s2){
            pla = a2;
            la = s2;
            psm = a1;
            sm = s1;
        }else{
            pla = a1;
            la = s1;
            psm = a2;
            sm = s2;
        }
        carry = 0;
        for(j=0;j<la;j++){
            r = (j<sm) ? (psm[sm-j-1]-'0') : 0;
            r += (pla[la-j-1]-'0')+carry;
            carry = r/10;
            pla[la-j] = '0' + r%10;
        }
        if(carry){
            pla[0] = '1';
        }else{
            pla = (s1<s2) ? &a2[1] : &a1[1];
        }
        if(j+carry>80){
                printf("overflow\n");
                goto NEXT;
        }
        printf("%s\n",pla);
NEXT:
        printf("");
    }
}