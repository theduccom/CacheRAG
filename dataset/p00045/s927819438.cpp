#include<cstdio>
using namespace std;

int main(){
    int a,b;
    int total=0,num=0,row=0;
        
    while(scanf("%d,%d",&a,&b)!=EOF){
        total=total+a*b;
        num=num+b;
        row++;
    }   
    int ans=(int)(num/(double)row+0.5); 
    printf("%d\n%d\n",total,ans);
    return 0;
}