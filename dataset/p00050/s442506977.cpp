#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main(){
	char a[2000];
	scanf("%[^\n]",a);
	for(int i = 4; i < strlen(a); i++){
        if(a[i-4] == 'a' && a[i-3] == 'p' && a[i-2] == 'p' && a[i-1] == 'l' && a[i] == 'e'){
            strncpy(a+i-4,"peach",5);
        }
        else if(a[i-4] == 'p' && a[i-3] == 'e' && a[i-2] == 'a' && a[i-1] == 'c' && a[i] == 'h'){
            strncpy(a+i-4,"apple",5);
        }
	}
    printf("%s\n",a);

    return 0;
}