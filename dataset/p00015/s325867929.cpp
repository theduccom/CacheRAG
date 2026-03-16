#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 80

int strlen(const char* str) {
    int i;
    for(i=0; i<999+1; ++i) {
        if(!str[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, i, j, num1_index, num2_index;
    char num1[999], num2[999];

    scanf("%d", &n);
    for(i=0; i<n; ++i) {
        scanf("%s %s", num1, num2);
        num1_index = strlen(num1);
        num2_index = strlen(num2);
        int sum=0, act=0, temp=0;
        char result[999] = {};
        for(j=0; j<MAX_SIZE && (num1_index > 0 || num2_index > 0); ++j) {
            if(num1_index <= 0) {
                temp = act + num2[--num2_index] - 48;
            }else if(num2_index <= 0) {
                temp = act + num1[--num1_index] - 48;
            }else {
                temp = act + num1[--num1_index] + num2[--num2_index] - 96;
            }
            result[j] = temp % 10;
            act = temp / 10;
        }
        if(j<MAX_SIZE) {
            result[j++] = act;
            act = 0;
        }
        if(j>=MAX_SIZE && (num1_index || num2_index || act)) {
            printf("overflow\n");
        }else {
            int zeros = 1;
            for(j=MAX_SIZE-1; j>=0; --j) {
                if(zeros && !result[j]) {
                    continue;
                }
                zeros = 0;
                printf("%d", result[j]);
            }
            if(zeros) {
                printf("0");
            }
            printf("\n");
        }

    }

    return 0;
}