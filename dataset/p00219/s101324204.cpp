#include <stdio.h>

int main()
{
    int n;
    int i, j;
    
    scanf("%d", &n);
    while (n != 0) {
        int ice[10] = {};
        int c;
        
        for (i = 0; i < n; i++) {
            scanf("%d", &c);
            ice[c]++;
        }

        for (i = 0; i < 10; i++) {
            if (ice[i] == 0) {
                printf("-\n");
            } else {
                for (j = 0; j < ice[i]; j++) {
                    putchar('*');
                }
                putchar('\n');
            }
        }

        scanf("%d", &n);
    }

    return 0;
}

