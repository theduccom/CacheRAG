#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
#define ARRAY_MAX 250

int main(void){

    char array[ARRAY_MAX];

    int i = 0;

    fgets(array,ARRAY_MAX,stdin);

    while(array[i] != '\0'){
        array[i] = toupper(array[i]);
        i++;
    }
    
    printf("%s",array);
    
    return 0;
}