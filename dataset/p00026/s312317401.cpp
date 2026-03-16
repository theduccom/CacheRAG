#include <iostream>
using namespace std;
int small[3][3] = {{0,1,0},{1,1,1},{0,1,0}};
int medium[3][3] ={{1,1,1},{1,1,1},{1,1,1}};
int big [5][5] = {{0,0,1,0,0},{0,1,1,1,0},{1,1,1,1,1},{0,1,1,1,0},{0,0,1,0,0}};

int main(){
    int paper[10][10] = {0};
    int x, y, size;
    int pivot_x, pivot_y;
    while(~scanf("%d,%d,%d", &x, &y, &size)){
        if(size == 1 || size == 2){
            pivot_x = x-1;
            pivot_y = y-1;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    if((pivot_x+j >= 0)&&(pivot_x+j <= 9)&&(pivot_y+i >= 0)&&(pivot_y+i <= 9)){
                        if(size == 1){
                            paper[pivot_y+i][pivot_x+j] += small[j][i];
                        }else{
                            paper[pivot_y+i][pivot_x+j] += medium[j][i];
                        }
                    }
                }
            }
        }else{
            pivot_x = x-2;
            pivot_y = y-2;
            for(int i=0; i<5; i++){
                for(int j=0; j<5; j++){
                    if((pivot_x+j >= 0)&&(pivot_x+j <= 9)&&(pivot_y+i >= 0)&&(pivot_y+i <= 9)){
                        paper[pivot_y+i][pivot_x+j] += big[j][i];
                    }
                }
            }

        }
    }
    int max = 0;
    int cnt = 0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(max < paper[i][j]){
                max = paper[i][j];
            }
            if(paper[i][j] == 0){
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    cout << max << endl;
    return 0;
}