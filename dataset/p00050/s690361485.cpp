#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
using namespace std;
int main(){
    char str[1000]={0};
    scanf("%[^\n]",str);
    for(int i = 0;str[i] != 0; i++){
        if(str[i] == 'a'&&str[i+1] == 'p'&&str[i+2] == 'p'&&str[i+3] == 'l'&&str[i+4] == 'e'){
            str[i] = 'p';
            str[i+1] = 'e';
            str[i+2] = 'a';
            str[i+3] = 'c';
            str[i+4] = 'h';
        }
        else if(str[i] == 'p'&&str[i+1] == 'e'&&str[i+2] == 'a'&&str[i+3] == 'c'&&str[i+4] == 'h'){
            str[i] = 'a';
            str[i+1] = 'p';
            str[i+2] = 'p';
            str[i+3] = 'l';
            str[i+4] = 'e';
        }
    }
    printf("%s\n",str);
}