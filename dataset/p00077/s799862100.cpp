#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
    char str[110];
    while (scanf("%s", str) != EOF){
        for (int i = 0; i < strlen(str); i++){
            if (str[i] == '@'){
                for (int j = 0; j < (str[i + 1] - '0'); j++){
                    printf("%c", str[i + 2]);
                }
                i += 2;
            }
            else {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
    
    return (0);
}