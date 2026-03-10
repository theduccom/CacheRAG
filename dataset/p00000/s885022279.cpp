#include<iostream>
#include<stdio.h>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<string.h>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            printf("%dx%d=%d\n",i,j,i*j);
        }
    }
	return 0;
}