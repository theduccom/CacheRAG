#include <stdio.h>

int count_number(void);

int main(void)
{
    
    int a[15];//15は適当　要素数はわからないが配列を作りたかった
    int b[15];
    int dataset_number = 0;
    while (1) {
        scanf("%d %d", &a[dataset_number], &b[dataset_number]);
        if (a[dataset_number] == 0 && b[dataset_number] == 0) {
            break;
        }
        dataset_number++;
    }
    int j = 0;
    while(j < dataset_number-1){
        int leapyear_number = 0;
        int i = a[j];
        while (i <= b[j]) {
            if ((((i % 4) == 0) && ((i % 100) != 0)) || ((i % 400) == 0)) {
                printf("%d\n", i);
                leapyear_number++;
            }
            i++;
        }
        if (leapyear_number == 0){
            printf("NA\n\n");
        } else {
            printf("\n");
        }
        j++;    
    }
    //j=dataset_number-1の時のみ最後\がひとつ
    if(dataset_number > 0){
        int leapyear_number = 0;
        int i = a[dataset_number-1];
        while (i <= b[dataset_number-1]) {
            if ((((i % 4) == 0) && ((i % 100) != 0)) || ((i % 400) == 0)) {
                printf("%d\n", i);
                leapyear_number++;
            }
            i++;
        }
        if (leapyear_number == 0){
            printf("NA\n");
        } else {
            
        }
    }
}