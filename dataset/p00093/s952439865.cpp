#include <stdio.h>
#include <stdbool.h>

bool judge(int year)
{
    bool flag = false;
    if (year % 400 == 0) {
        flag = true;                
    } else if (year % 100 == 0) {
        flag = false;
    } else if (year % 4 == 0) {
        flag = true;
    }
    return flag;
}

int main(void)
{ 
    int number = 0;
    while (true) {
        int x, y;
        bool exist = false;
        scanf("%d%d", &x, &y);
        if (x == 0 && y == 0) {
            break;
        }
        if (number != 0) {
            printf("\n");
        }
        for (int i = x;i <= y; ++i) { 
            bool flag = judge(i);
	    if (flag == true) {
                printf("%d\n", i);
                exist = true;
            }
        }
        if (exist == false) {
            printf("NA\n");
        }  
        number++;     
    }
    return 0;        
}