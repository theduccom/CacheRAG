#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

using namespace std;

const size_t opsize = 81, bufsize = 102;
unsigned char op1[opsize], op2[opsize];
char buf[bufsize];

bool readOp(unsigned char * op){
    memset(op, 0, opsize);
    
    fgets(buf, bufsize, stdin);
    int l = strlen(buf);
    if(l > 81) return true;

    char *p = &buf[l-2];
    for (int j = 0; j < l-1; j++) {
        op[j] = *p - '0';
        p--;
    }
    return false;
}

void printOp(unsigned char * op){
    int mh = opsize - 1;
    while(op[mh] == 0 && mh > 0) mh--;
    for(; mh >= 0; mh--){
        putchar(op[mh] + '0');
    }
    putchar('\n');
}

bool plus(){
    for (int i = 0; i < opsize - 1; i++) {
        op1[i] += op2[i];
        if(op1[i] >= 10){
            op1[i] -= 10;
            op1[i+1] += 1;
        }
    }
    return op1[opsize - 1] != 0;
}

int main(int argc, char const* argv[])
{
    int n;
    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        bool overflow = false;
        overflow |= readOp(op1);
        overflow |= readOp(op2);
        if(overflow){
            puts("overflow");
            continue;
        }
        overflow = plus();

        if(overflow){
            puts("overflow");
            continue;
        }
        printOp(op1);
    }
    
    return 0;
}