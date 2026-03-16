#include<cstdio>
int main(){
    bool ar[3];
    ar[0]=true;
    ar[1]=ar[2]=false;
    char a,b;
    while(scanf("%c,%c\n",&a,&b)!=-1){
        bool t=ar[b-'A'];
        ar[b-'A']=ar[a-'A'];
        ar[a-'A']=t;
    }
    for(int i=0;i<3;i++){
        if(ar[i])printf("%c\n",(char)('A'+i));
    }
}