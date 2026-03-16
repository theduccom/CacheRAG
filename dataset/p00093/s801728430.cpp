#include<stdio.h>
     
int print_leap_year(int x);
         
int main(void)
{
    int start_year, end_year, counter, dataset_number;
    dataset_number =0;
    while(1){
        scanf("%d %d", &start_year, &end_year);
        if(start_year == 0 && end_year == 0){
            break;
        }else{
            if(dataset_number != 0){
            printf("\n");
            }
            counter = 0;
            for(int i = start_year; i <= end_year; i++){
                counter += print_leap_year(i); 
            }
            if( counter == 0){
                printf("NA\n");
            } 
        }
    ++dataset_number; 
    }
    return 0;
}
     
     
int print_leap_year(int x)
{
    if((x % 4 == 0 && !(x % 100 == 0)) || x % 400 == 0){
        printf("%d\n", x);
        return 1;
    }
    return 0;
} 