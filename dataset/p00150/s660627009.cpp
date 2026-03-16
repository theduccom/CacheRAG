#include <stdio.h>

const int max = 10000; //素数表最大数
int prime[max + 1]; //素数表配列
int idx, idx2, tmp;

void list(); //素数表作成
void judge(int n); //双子素数判定

int main(){
    
    int n;
    
    list();
    
    while (scanf("%d", &n)){
        if (n == 0) break;
        judge(n);
        printf("%d %d\n", idx2, idx);
    }
    
    return 0;
}

void list(){
    int i, k;
    for (i = 2; i <= max; i++){
        prime[i] = 1;
    }
    for (i = 2; i * i <= max; i++){
        if (prime[i]){
            for (k = 2 * i; k <= max; k += i){
                prime[k] = 0;
            }
        }
    }
}

void judge(int n){
    int i;
    for (i = n; 0 < n; i--){
        tmp = i - 2;
        if(prime[i]){
            if(prime[tmp]){
                idx = i;
                idx2 = tmp;
                break;
            }
        }
    }
}