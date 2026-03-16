#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x,y,size,count=0,max=0;
    int dots[14][14]={{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}};
    while(scanf("%d,%d,%d",&x,&y,&size)!=EOF){
        x += 2;
        y += 2;
        dots[y][x]++;
        switch(size){
            case 1 :
                dots[y-1][x]++;
                dots[y][x+1]++;
                dots[y+1][x]++;
                dots[y][x-1]++;
                break;
            case 2 :
                dots[y-1][x]++;
                dots[y-1][x+1]++;
                dots[y][x+1]++;
                dots[y+1][x+1]++;
                dots[y+1][x]++;
                dots[y+1][x-1]++;
                dots[y][x-1]++;
                dots[y-1][x-1]++;
                break;
            case 3 :
                dots[y-1][x]++;
                dots[y-1][x+1]++;
                dots[y][x+1]++;
                dots[y+1][x+1]++;
                dots[y+1][x]++;
                dots[y+1][x-1]++;
                dots[y][x-1]++;
                dots[y-1][x-1]++;
                dots[y-2][x]++;
                dots[y][x+2]++;
                dots[y+2][x]++;
                dots[y][x-2]++;
                break;
        }
    }
    for(int i=2;i<12;i++){
        for(int j=2;j<12;j++){
            if(dots[i][j]==0){
                count++;
            }
            if(max<dots[i][j]){
                max=dots[i][j];
            }
        }
    }
    cout<<count<<endl<<max<<endl;
    return 0;
}