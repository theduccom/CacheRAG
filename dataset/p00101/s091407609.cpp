#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
using namespace std;
int main(){
    int w;
    scanf("%d",&w);
    getchar();
    for(int i = 0;i < w; i++){

        char str[1000]={0};

        scanf("%[^\n]",str);
        getchar();
        for(int j = 0;str[j] != 0; j++){
            if(str[j] == 'H'&&str[j+1] == 'o'&&str[j+2] == 's'&&str[j+3] == 'h'&&str[j+4] == 'i'&&str[j+5] == 'n'&&str[j+6] == 'o'){
                   str[j+6] = 'a';
               }
        }
        printf("%s\n",str);
    }
    return 0;
}