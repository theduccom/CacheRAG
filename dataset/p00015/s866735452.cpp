#include <iostream>
#include <cstring>
#define N 10000
using namespace std;
void mpstr2num(int *num, char *str);
void mpadd(int* ret, int* a, int* b);
void mpnum2str(char* str, int* num);

char a[100], b[100];
int anum[25], bnum[25];
int resultnum[25];
char result[100];

void mpstr2num(int* num, char* str){
    char* ss;
    int* nn;
    while(*str == ' ' || *str == '\t') str++;
    while(*str == '0') str++;
    ss = str;
    while(*ss >= '0' && *ss <= '9') ss++;
    if(ss == str){
        *num = 0;
        return;
    }
    int x = 0;
    int k = 1;
    nn = num;
    do{
        x+=(*--ss - '0') * k;
        k *= 10;
        if(k == N || ss == str){
            *++nn = x;
            x = 0;
            k = 1;
        }
    }while(ss != str);

    *num = nn - num;
    return;
}

void mpadd(int* ret, int* a, int* b){
    int la = *a;
    int lb = *b;
    int lr = (la >= lb) ? la : lb;
    int* rr = ret;
    int x = 0;
    for(int i=1; i<= lr; i++){
        if(i <= la) x += *++a;
        if(i <= lb) x += *++b;
        if(x < N){
            *++rr = x;
            x = 0;
        }else{
            *++rr = x - N;
            x = 1;
        }
    }
    *++rr = x;
    *ret = lr + x;
    return;
}

void mpnum2str(char* str, int* num){
    if(*num == 0){
        *str++ = '0';
        *str = '\0';
        return;
    }
    char* ss = str - 1;
    int x;
    for(int i=*num; i>0; i--){
        x = *++num;
        for(int j=1; j<N; j*=10){
            *++ss = x%10 + '0';
            x /= 10;
        }
    }    while(*ss == '0') ss--;
    *(ss+1) = '\0';
    while(str < ss){
        x = *str;
        *str++ = *ss;
        *ss-- = x;
    }
    return;
}

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a >> b;
        if(strlen(a) > 80 || strlen(b) > 80){
            cout << "overflow" << endl;
            continue;
        }
        mpstr2num(anum, a);
        mpstr2num(bnum, b);
        mpadd(resultnum, anum, bnum);
        mpnum2str(result, resultnum);
        if(strlen(result) > 80){
            cout << "overflow" << endl;
            continue;
        }else{
            cout << result << endl;
        }
    }
    return 0;
}