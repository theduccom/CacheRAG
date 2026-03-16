#include<stdio.h>
#include<string.h>
 
int main(void){
    int i, j, k;
    char s[81];
    while (fgets(s, 81, stdin) != 0){
        char t[3][5] = { "the", "this", "that" };
        for (i = 1; i<27; i++){
            for (j = 0; j<3; j++){
                for (k = 0; k<strlen(t[j]); k++)
                    t[j][k] = (t[j][k] - 'a' + 1) % 26 + 'a';
                if (strstr(s, t[j]) != 0){
                    for (j = 0; j<strlen(s); j++)
                        if ('a' <= s[j] && s[j] <= 'z')
                            for (k = 0; k<i; k++)
                                s[j] += 26 * (s[j] - 'a' - 1<0) - 1;
                    printf("%s", s);
                    break;
                }
            }
            if (j != 3)
                break;
        }
    }
    return 0;
}