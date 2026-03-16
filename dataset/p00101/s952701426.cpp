// include
// ----------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

// repetition
// ----------------------------------------------------------------------------
#define FOR(i, a, b) for (i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

// memory clear
// ----------------------------------------------------------------------------
#define CLRNUM(a) memset((a), 0, sizeof(a))
#define CLRBOOL(a, flag) memset((a), flag, sizeof(a))
#define CLRCHAR(a) memset((a), '\0', sizeof(a))

// debug
// ----------------------------------------------------------------------------
#define DEBUGNUM(x) printf("%d\n", x);
#define DEBUGCHAR(x) printf("%c\n", x);
#define DEBUGSTR(x) printf("%s\n", x);
#define DEBUGFORNUM(i, a, b, x) FOR(i, a, b){ printf("%d ", x[i]); }
#define DEBUGFORCHAR(i, a, b, x) FOR(i, a, b){ printf("%c ", x[i]); }
#define DEBUGREPNUM(i, n, x) REP(i, n){ printf("%d ", x[i]); }
#define DEBUGREPCHAR(i, n, x) REP(i, n){ printf("%c ", x[i]); }

// other
// ----------------------------------------------------------------------------
#define PUTNL printf("\n")

// constant
// ----------------------------------------------------------------------------
#define INF 1000000000

int main(void)
{
    int n;
    int i, j;
    char str[1024];

    scanf("%d", &n);

    CLRCHAR(str);

    getchar();
    for (i = 0; i < n; ++i){
        fgets(str, sizeof(str), stdin);
        
        for (j = 0; str[j] != '\0'; j++){
            if (str[j] == 'H'){
                if (str[j + 1] == 'o'){
                    if (str[j + 2] == 's'){
                        if (str[j + 3] == 'h'){
                            if (str[j + 4] == 'i'){
                                if (str[j + 5] == 'n'){
                                    if (str[j + 6] == 'o'){
                                        str[j + 6] = 'a';
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
        printf("%s", str);
        
        CLRCHAR(str);
    }
    
}