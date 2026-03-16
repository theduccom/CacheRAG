#include<cstdio>
 
int main(){
    int sp=0;
    int tn=0;
    int n=0;
     
    int price, num;
    
    while( scanf("%d,%d",&price, &num) != EOF) {
    	
        sp += price * num;
        tn += num;
        n++;
        
    }
    printf( "%d\n%d\n", sp, (int)((double) tn / n + 0.5));
}
