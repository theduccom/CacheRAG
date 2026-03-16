#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int N;

    while(cin >> N, N){
        int d[10];
        for(int i = 0; i < 10; i++)
            d[i] = 0;

        int No;
        for(int i = 0; i < N; i++){
            cin >> No;
            d[No]++;
        }

       for(int i = 0; i < 10; i++){
           if(d[i] == 0)printf("-");
           else
           for(int j = 0; j < d[i]; j++) printf("*");
printf("\n");
       }
}

return 0;
}