#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define N 10
int main(int argc, const char * argv[])
{
    for(int i=1; i<N; i++){
        for(int j=1; j<N; j++){
            printf("%dx%d=%d\n",i,j,i*j);
        }
    }

}